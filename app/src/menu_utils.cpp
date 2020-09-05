#include "menu.h"

void Menu::startGame(sf::RenderWindow& window) {
  Game game(&window);

  while (window.isOpen()) {
    if (!game.getEndgame()) {
      game.updateEvents();
      game.render();
    } else {
      break;
    }
  }
  SaveResultToFile(game.getScore());
  showDeadMenu(window, game);
  if (m_menuNum == NEW) {
    startGame(window);
  } else if (m_menuNum == BACK) {
    return;
  }
}

void Menu::showDeadMenu(sf::RenderWindow& win, Game& game) {
  sf::Sprite new_b(m_new_game_text), back_to_menu(m_back_to_menu);

  game.showScore("Your score is: ", game.getScore(), 390, 300);
  back_to_menu.setPosition(370, 450);
  new_b.setPosition(350, 370);
  new_b.setScale(sf::Vector2f(0.7, 0.7));

  while (win.isOpen()) {
    new_b.setColor(sf::Color::White);
    back_to_menu.setColor(sf::Color::White);

    if (sf::IntRect(300, 370, 400, 80).contains(sf::Mouse::getPosition(win))) {
      new_b.setColor(sf::Color::Green);
      m_menuNum = NEW;
    }
    if (sf::IntRect(300, 450, 400, 80).contains(sf::Mouse::getPosition(win))) {
      back_to_menu.setColor(sf::Color::Magenta);
      m_menuNum = BACK;
    }
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
      if (m_menuNum == NEW) {
        break;
      }
      if (m_menuNum == BACK) {
        break;
      }
    }
    win.draw(game.getScoreLabel());
    win.draw(new_b);
    win.draw(back_to_menu);
    win.display();
    win.clear();
  }
}

void Menu::SaveResultToFile(int score) {
  std::vector<std::string> vec;
  std::ifstream input(".scores");
  std::string line;

  while (std::getline(input, line)) {
    if (line.size() > 0) {
      vec.push_back(line);
    }
  }
  if (score > 0)
    vec.push_back(std::string(std::to_string(score)));
  std::sort(vec.begin(), vec.end(),
            [](std::string a, std::string b) {
              return (std::stoi(a) < std::stoi(b));
            });
  std::reverse(vec.begin(), vec.end());
  std::ofstream out(".scores", std::ofstream::out | std::ofstream::trunc);
  int i = 0;
  for (auto it = vec.begin(); it != vec.end() && i < 10; ++it, ++i) {
    out << *it << std::endl;
  }
  out.close();
  input.close();
}

std::vector<std::string> Menu::getFile() {
  std::ifstream inp(".scores");
  std::string line;
  std::vector<std::string> vec;

  if (inp) {
    while (std::getline(inp, line)) {
      vec.push_back(line);
    }
  } else {
    std::cerr << "Error open scores\n";
  }
  return vec;
}


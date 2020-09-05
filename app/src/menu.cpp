#include "menu.h"

Menu::Menu() : m_menuNum(NONE) {
  m_new_game_text.loadFromFile("app/resources/new.png");
  m_board_text.loadFromFile("app/resources/board.png");
  m_exit_text.loadFromFile("app/resources/exit.png");
  m_background.loadFromFile("app/resources/back.png");
  m_back_to_menu.loadFromFile("app/resources/back_menu.png");
}

void Menu::initMenu(sf::RenderWindow& window) {
  sf::Sprite new_b(m_new_game_text), board_b(m_board_text), exit_b(m_exit_text), back_menu(m_background);

  new_b.setPosition(300, 30);
  board_b.setPosition(290, 150);
  exit_b.setPosition(425, 270);
  back_menu.setPosition(0, 0);

  while (window.isOpen()) {
    m_menuNum = 0;
    swapSprites(new_b, board_b, exit_b, window);
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
      if (m_menuNum == NEW) {
        startGame(window);
      } else if (m_menuNum == BOARD) {
        bestScore(window);
      } else if (m_menuNum == EXIT) {
        window.close();
        exit(0);
      }
    }
    window.draw(back_menu);
    window.draw(new_b);
    window.draw(board_b);
    window.draw(exit_b);
    window.display();
    window.clear();
  }
}

void Menu::swapSprites(sf::Sprite& new_b, sf::Sprite& board_b,
                       sf::Sprite& exit_b, sf::RenderWindow& window) {
  new_b.setColor(sf::Color::White);
  board_b.setColor(sf::Color::White);
  exit_b.setColor(sf::Color::White);

  if (sf::IntRect(200, 30, 800, 80).contains(sf::Mouse::getPosition(window))) {
    new_b.setColor(sf::Color::Green);
    m_menuNum = NEW;
  }
  if (sf::IntRect(200, 150, 800, 80).contains(sf::Mouse::getPosition(window))) {
    board_b.setColor(sf::Color::Cyan);
    m_menuNum = BOARD;
  }
  if (sf::IntRect(200, 270, 800, 80).contains(sf::Mouse::getPosition(window))) {
    exit_b.setColor(sf::Color::Red);
    m_menuNum = EXIT;
  }
}

void Menu::bestScore(sf::RenderWindow& window) {
  std::vector<std::string> scores = getFile();
  sf::Sprite board_b(m_board_text);
  int i = 1;

  m_font.loadFromFile("app/resources/ArialRegular.ttf");
  
  board_b.setPosition(280, 50);

  m_scores_label[0].setCharacterSize(20);
  m_scores_label[0].setFont(m_font);
  m_scores_label[0].setString("Press ESC to back...");
  m_scores_label[0].setPosition(sf::Vector2f(400, 700));

  // for (const auto& it : scores) {
  for (auto it = scores.begin(); it != scores.end() && i != 11; ++i, ++it) {
    m_scores_label[i].setCharacterSize(30);
    m_scores_label[i].setFont(m_font);
    m_scores_label[i].setString(std::to_string(i) + ".  " + *it);
    m_scores_label[i].setPosition(sf::Vector2f(430, i * 40 + 130));
  }

  while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
    for (int i = 0; i < 11; ++i) {
      window.draw(m_scores_label[i]);
    }
    window.display();
    window.clear();
    window.draw(board_b);
  }
}

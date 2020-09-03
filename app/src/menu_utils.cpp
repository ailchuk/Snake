#include "menu.h"

void Menu::startGame(sf::RenderWindow& window) {
  Game game(&window);

  while (window.isOpen()) {
    if (!game.getEndgame()) {
      game.updateEvents();
      game.render();
    }
    if (game.getEndgame()) {
      SaveResultToFile(game.getScore());
      showDeadMenu(window, game);
    }
  }
}

void Menu::showDeadMenu(sf::RenderWindow& win, Game& game) {
  sf::Sprite new_b(m_new_game_text), back_to_menu(m_back_to_menu);

  game.showScore("Your score is: ", game.getScore(), 400, 300);
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
        win.clear();
        startGame(win);
      }
      if (m_menuNum == BACK) {
        win.clear();
        init_menu(win);
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

}
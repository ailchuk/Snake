#include "menu.h"

Menu::Menu() : m_menuNum(NONE), m_isMenu(true) {
  m_new_game_text.loadFromFile("app/resources/new.png");
  m_board_text.loadFromFile("app/resources/board.png");
  m_exit_text.loadFromFile("app/resources/exit.png");
  m_background.loadFromFile("app/resources/back.png");
}

void Menu::init_menu(sf::RenderWindow& window) {
  sf::Sprite new_b(m_new_game_text), board_b(m_board_text), exit_b(m_exit_text), back_menu(m_background);

  new_b.setPosition(300, 30);
  board_b.setPosition(250, 150);
  exit_b.setPosition(425, 270);
  back_menu.setPosition(0, 0);

  while (m_isMenu) {
    m_menuNum = 0;
    swap_sprites(new_b, board_b, exit_b, window);
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
      if (m_menuNum == NEW) {
        startGame(window);
      } else if (m_menuNum == BOARD) {
        leaderboard(window);
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

void Menu::swap_sprites(sf::Sprite& new_b, sf::Sprite& board_b,
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

void Menu::leaderboard(sf::RenderWindow& window) {
  // window.draw(back_menu);
  window.display();
  while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
  }

  // TODO: open file and display score!!!
}


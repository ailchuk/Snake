#include "menu.h"

void Menu::startGame(sf::RenderWindow& window) {
  Game game(&window);

  while (game.isRunning()) {
    if (!game.m_endgame) {
      game.updateEvents();
      game.render();
    }
  }
}

// while (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
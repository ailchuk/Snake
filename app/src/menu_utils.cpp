#include "menu.h"

void Menu::startGame(sf::RenderWindow& window) {
  Game game(&window);

  while(game.isRunning()) {
    if (!game.m_endgame) {
      game.update();
      game.render();
    }
  }
}

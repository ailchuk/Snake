#pragma once

#include "header.h"

class Game {
 public:
  Game(sf::RenderWindow* window);
  void init();
  bool isRunning();
  void update();
  void Events();
  void render();

  bool m_endgame;
 private:
  sf::Font m_font;
  sf::Text m_scoreLabel;
  int m_score;
  
  sf::RenderWindow* m_window;
  sf::Event m_winEvent;

};
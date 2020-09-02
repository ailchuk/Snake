#pragma once

#include "header.h"

class Food;
class Snake;

class Game {
 public:
  Game(sf::RenderWindow* window);
  void init();
  bool isRunning();
  void updateEvents();
  void render();

  bool m_endgame;
 private:
  Food* food;
  sf::Clock clock;
  Snake* snake;
  
  sf::Font m_font;
  sf::Text m_scoreLabel;
  int m_score;
  
  sf::RenderWindow* m_window;
  sf::Event m_winEvent;

};
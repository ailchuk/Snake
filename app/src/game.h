#pragma once

#include "header.h"

class Food;
class Snake;

class Game {
 public:
  Game(sf::RenderWindow* window);
  ~Game();
  void updateEvents();
  void render();
  int getScore();
  bool getEndgame();
  sf::Text getScoreLabel();
  void showScore(std::string text, int m_score, int x, int y);

 private:
  bool m_endgame;
  bool m_which_food;
  int m_score;
  sf::RenderWindow* m_window;
  Food* m_food;
  Snake* m_snake;
  sf::Clock m_clock;
  sf::Clock m_clock_extra;
  sf::Font m_font;
  sf::Text m_score_label;
  sf::Event m_win_event;

};
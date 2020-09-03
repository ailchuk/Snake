#pragma once

#include "header.h"

class Snake {
 public:
  Snake(sf::RenderWindow* w);
  void changeMoveDirection(sf::Vector2<int> direction);
  void drawSnake();
  void moveSnake();
  void subtractLen();
  void addLen();
  bool checkCollisions();
  bool checkFood();
  int getLen();
  std::vector<sf::RectangleShape> getBody();

 private:
  bool m_update_len;
  int m_snake_len;
  sf::RenderWindow* m_win;
  sf::Vector2<int> m_cur_Dir;
  std::vector<sf::RectangleShape> m_body;
  sf::Color m_color_body;
  sf::Color m_color_head;
};
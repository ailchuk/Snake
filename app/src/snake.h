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
  // sf::Vector2<int> getDir();
  std::vector<sf::RectangleShape> getBody();
 private:
  sf::RenderWindow* win;

  bool updateLen;
  int snakeLen;
  sf::Vector2<int> cur_Dir;
  std::vector<sf::RectangleShape> body;

  /* Load from options */
  sf::Color colorBody;
  sf::Color colorHead;
};
#pragma once

#include "header.h"

class Food {
 public:
  Food(sf::RenderWindow* w);
  sf::RectangleShape getFood();
  bool checkFood(std::vector<sf::RectangleShape> body);
  void changeFood();
  sf::Vector2f getPos();
  sf::Vector2f foodnewPos(std::vector<sf::RectangleShape> body);
  void changeFoodPos(std::vector<sf::RectangleShape> body);
  void drawFood();

 private:
  sf::RectangleShape food;
  sf::RenderWindow* win;
  sf::Vector2<int> cur_Snake;
  // int x;
  // int y;
  sf::Vector2f pos;
};
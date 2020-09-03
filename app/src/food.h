#pragma once

#include "header.h"

class Food {
 public:
  Food(sf::RenderWindow* w);
  sf::RectangleShape getFood();
  bool checkFood(std::vector<sf::RectangleShape> body,
                 int& m_score, bool& m_which_food);
  void changeFood();
  sf::Vector2f getPos();
  sf::Vector2f foodnewPos(std::vector<sf::RectangleShape> body);
  void changeFoodPos(std::vector<sf::RectangleShape> body);
  void drawFood();
  void drawExtraFood();
  void changeExtraFoodPos(std::vector<sf::RectangleShape> body);

 private:
  sf::RectangleShape m_extra_food;
  sf::RectangleShape m_food;
  sf::RenderWindow* m_win;
  sf::Vector2f m_pos;
  sf::Vector2f m_extra_pos;
};
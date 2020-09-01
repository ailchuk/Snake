#include "utils.h"

sf::RectangleShape getRectangleAt(sf::Vector2f location, sf::Color color) {
  sf::RectangleShape box;
 
  box.setSize(sf::Vector2f(BOX_SIZE, BOX_SIZE));
  box.setPosition(location);
  box.setOutlineThickness(3);
  box.setFillColor(color);
 
  return box;
}
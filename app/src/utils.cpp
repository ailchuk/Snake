#include "utlis.h"

sf::RectangleShape getRectangleAt(sf::Vector2f location, sf::Color color) {
  sf::RectangleShape box;

  box.setSize(sf::Vector2f(BOX_SIZE, BOX_SIZE));
  box.setPosition(location);
  box.setOutlineThickness(1);
  box.setOutlineColor(sf::Color::Black);
  box.setFillColor(color);

  return box;
}

int randNum(int low, int up, int size) {
  std::random_device random;
  std::uniform_int_distribution<int> uid(low, up);
  int res = uid(random);

  while (res % size != 0)
    res++;
  return res;
}

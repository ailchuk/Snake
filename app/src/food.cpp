#include "food.h"

Food::Food(sf::RenderWindow* w) : win(w) {
  pos.x = WIDTH - 400;
  pos.y = HEIGHT - 400;

  food = getRectangleAt(sf::Vector2f(pos.x, pos.y), sf::Color::Blue);
}

sf::RectangleShape Food::getFood() { return food; }

sf::Vector2f Food::getPos() { return pos; }

bool Food::checkFood(std::vector<sf::RectangleShape> body) {
  sf::Vector2f position = body.front().getPosition();

  if (position.x == pos.x && position.y == pos.y)
    return true;

  return false;
}

sf::Vector2f Food::foodnewPos(std::vector<sf::RectangleShape> body) {
  sf::Vector2f newPos;
  bool snake_col = true;

  while (snake_col) {
    int x = randNum(100, WIDTH, BOX_SIZE);
    int y = randNum(100, HEIGHT, BOX_SIZE);

    newPos.x = x;
    newPos.y = y;
    snake_col = false;
    for (const auto& it : body) {
      if (it.getGlobalBounds().contains(newPos)) {
        snake_col = true;
        break;
      }
    }
  }
  return newPos;
}

void Food::drawFood() {
    food = getRectangleAt(pos, sf::Color::Blue);
    win->draw(food);
}

void Food::changeFoodPos(std::vector<sf::RectangleShape> body) {
  pos = foodnewPos(body);
}
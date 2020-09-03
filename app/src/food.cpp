#include "food.h"

Food::Food(sf::RenderWindow* w) : m_win(w) {
  m_pos.x = WIDTH - 400;
  m_pos.y = HEIGHT - 400;
  m_extra_pos.x = WIDTH - 600;
  m_extra_pos.y = HEIGHT - 600;

  m_food = getRectangleAt(sf::Vector2f(m_pos.x, m_pos.y), sf::Color::Blue);
}

sf::RectangleShape Food::getFood() { return m_food; }

sf::Vector2f Food::getPos() { return m_pos; }

bool Food::checkFood(std::vector<sf::RectangleShape> body,
                     int& m_score, bool& m_which_food) {
  sf::Vector2f position = body.front().getPosition();

  if (position.x == m_pos.x && position.y == m_pos.y) {
    m_score += 10;
    m_which_food = false;
    return true;
  } else if (position.x == m_extra_pos.x && position.y == m_extra_pos.y) {
    m_score += 100;
    m_which_food = true;
    return true;
  }

  return false;
}

sf::Vector2f Food::foodnewPos(std::vector<sf::RectangleShape> body) {
  sf::Vector2f newPos;
  bool snake_col = true;

  while (snake_col) {
    int x = randNum(100, WIDTH - BOX_SIZE, BOX_SIZE);
    int y = randNum(100, HEIGHT - BOX_SIZE, BOX_SIZE);

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
  m_food = getRectangleAt(m_pos, sf::Color::Blue);
  m_win->draw(m_food);
}

void Food::changeFoodPos(std::vector<sf::RectangleShape> body) {
  m_pos = foodnewPos(body);
}

void Food::drawExtraFood() {
  m_extra_food = getRectangleAt(m_extra_pos, sf::Color::Yellow);
  m_win->draw(m_extra_food);
}

void Food::changeExtraFoodPos(std::vector<sf::RectangleShape> body) {
  if ((m_extra_pos = foodnewPos(body)) == m_pos)
    m_extra_pos = foodnewPos(body);
}
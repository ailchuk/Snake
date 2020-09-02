#include "snake.h"

Snake::Snake(sf::RenderWindow *w) {
  colorBody = sf::Color::Green;
  colorHead = sf::Color::Red;
  win = w;
  updateLen = false;

  cur_Dir = sf::Vector2<int>(0, -1);

  snakeLen = 4;

  for (int i = 0; i < 4; ++i) {
    if (i == 0)
      body.insert(body.begin(), getRectangleAt(sf::Vector2f(WIDTH / 2, HEIGHT / 2), colorHead));
    else
      body.push_back(getRectangleAt(sf::Vector2f(10000, 10000), colorBody));
  }
}

void Snake::drawSnake() {
  for (int i = 1; i < snakeLen; ++i)
    win->draw(body[i]);
  win->draw(body[0]);
}

void Snake::moveSnake() {
  sf::Vector2f newHead(body.front().getPosition().x + BOX_SIZE * cur_Dir.x,
                       body.front().getPosition().y + BOX_SIZE * cur_Dir.y);
  body.front().setFillColor(colorBody);
  body.insert(body.begin(), getRectangleAt(newHead, colorHead));
  if (!updateLen && !(updateLen = false))
    body.pop_back();
}

void Snake::changeMoveDirection(sf::Vector2<int> direction) {
  if ((cur_Dir.x == direction.x && cur_Dir.y != direction.y) ||
      (cur_Dir.x != direction.x && cur_Dir.y == direction.y))
    return;
  cur_Dir.x = direction.x;
  cur_Dir.y = direction.y;
}

void Snake::subtractLen() {
  snakeLen--;
  updateLen = true;
}

void Snake::addLen() {
  snakeLen++;
  updateLen = true;
}

int Snake::getLen() { return snakeLen; }

bool Snake::checkCollisions() {
  const std::vector<sf::RectangleShape> s_body = body;
  sf::Vector2f pos = s_body.front().getPosition();

  if (pos.x + BOX_SIZE > win->getSize().x || pos.x < 0 ||
      pos.y + BOX_SIZE > win->getSize().y || pos.y < 0) {
    return true;
  }
  const float nextX = pos.x + BOX_SIZE / 2 + (BOX_SIZE * cur_Dir.x);
  const float nextY = pos.y + BOX_SIZE / 2 - (BOX_SIZE * cur_Dir.y);

  for (int i = 2; i < snakeLen; ++i) {
    float x = (body[i].getPosition().x + BOX_SIZE / 2);
    float y = (body[i].getPosition().y + BOX_SIZE / 2);

    if (x == nextX && y == nextY)
      return true;
  }
  return false;
}

std::vector<sf::RectangleShape> Snake::getBody() { return body; }

// sf::Vector2<int> Snake::getDir() { return cur_Dir; }

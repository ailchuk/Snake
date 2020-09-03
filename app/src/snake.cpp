#include "snake.h"

Snake::Snake(sf::RenderWindow *w) {
  m_color_body = sf::Color::Green;
  m_color_head = sf::Color::Red;
  m_win = w;
  m_update_len = false;
  m_cur_Dir = sf::Vector2<int>(0, -1);
  m_snake_len = 4;

  for (int i = 0; i < 4; ++i) {
    if (i == 0) {
      m_body.insert(m_body.begin(), getRectangleAt(sf::Vector2f(WIDTH / 2, HEIGHT / 2), m_color_head));
    } else {
      m_body.push_back(getRectangleAt(sf::Vector2f(10000, 10000), m_color_body));
    }
  }
}

void Snake::drawSnake() {
  for (int i = 1; i < m_snake_len; ++i) {
    m_win->draw(m_body[i]);
  }
  m_win->draw(m_body[0]);
}

void Snake::moveSnake() {
  sf::Vector2f newHead(m_body.front().getPosition().x + BOX_SIZE * m_cur_Dir.x,
                       m_body.front().getPosition().y + BOX_SIZE * m_cur_Dir.y);

  m_body.front().setFillColor(m_color_body);
  m_body.insert(m_body.begin(), getRectangleAt(newHead, m_color_head));

  if (!m_update_len && !(m_update_len = false)) {
    m_body.pop_back();
  }
}

void Snake::changeMoveDirection(sf::Vector2<int> direction) {
  if ((m_cur_Dir.x == direction.x && m_cur_Dir.y != direction.y) ||
      (m_cur_Dir.x != direction.x && m_cur_Dir.y == direction.y)) {
    return;
  }
  m_cur_Dir.x = direction.x;
  m_cur_Dir.y = direction.y;
}

void Snake::subtractLen() {
  m_snake_len--;
  m_update_len = true;
}

void Snake::addLen() {
  m_snake_len++;
  m_update_len = true;
}

int Snake::getLen() { return m_snake_len; }

bool Snake::checkCollisions() {
  const std::vector<sf::RectangleShape> s_body = m_body;
  sf::Vector2f pos = s_body.front().getPosition();

  if (pos.x + BOX_SIZE > m_win->getSize().x || pos.x < 0 ||
      pos.y + BOX_SIZE > m_win->getSize().y || pos.y < 0) {
    return true;
  }
  const float nextX = pos.x + BOX_SIZE / 2 + (BOX_SIZE * m_cur_Dir.x);
  const float nextY = pos.y + BOX_SIZE / 2 - (BOX_SIZE * m_cur_Dir.y);

  for (int i = 2; i < m_snake_len; ++i) {
    float x = (m_body[i].getPosition().x + BOX_SIZE / 2);
    float y = (m_body[i].getPosition().y + BOX_SIZE / 2);

    if (x == nextX && y == nextY) {
      return true;
    }
  }
  return false;
}

std::vector<sf::RectangleShape> Snake::getBody() { return m_body; }

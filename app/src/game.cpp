#include "game.h"

Game::Game(sf::RenderWindow* window) : m_window(window) {
  m_snake = new Snake(window);
  m_food = new Food(window);
  m_endgame = false;
  m_score = 0;
  m_which_food = false;
  showScore("Score: ", m_score, 10, 5);
}

Game::~Game() {
  delete m_snake;
  delete m_food;
}

void Game::showScore(std::string text, int m_score, int x, int y) {
  m_font.loadFromFile("app/resources/ArialRegular.ttf");
  m_score_label.setFont(m_font);
  m_score_label.setString(text + std::to_string(m_score));
  m_score_label.setPosition(sf::Vector2f(x, y));
}


int Game::getScore() { return m_score; }

bool Game::getEndgame() { return m_endgame; }

sf::Text Game::getScoreLabel() { return m_score_label; }

void Game::updateEvents() {
  while (m_window->pollEvent(m_win_event) && !m_endgame) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
      m_window->close();
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
      m_snake->changeMoveDirection(sf::Vector2<int>(-1, 0));
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
      m_snake->changeMoveDirection(sf::Vector2<int>(1, 0));
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
      m_snake->changeMoveDirection(sf::Vector2<int>(0, -1));
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
      m_snake->changeMoveDirection(sf::Vector2<int>(0, 1));
  }
}

void Game::render() {
  int gameSpeed = 8;
  sf::Time elapsed2 = m_clock_extra.getElapsedTime();
  sf::Time elapsed1 = m_clock.getElapsedTime();
  
  m_window->draw(m_score_label);
  m_food->drawFood();
  m_food->drawExtraFood();
  m_snake->drawSnake();
  m_snake->moveSnake();

  if (elapsed1.asSeconds() >= 4) {
    m_snake->subtractLen();
    m_clock.restart();
  }
  
  if (m_snake->checkCollisions() || m_snake->getLen() == 2) {
    m_endgame = true;
  }
  
  if (m_food->checkFood(m_snake->getBody(), m_score, m_which_food)) {
    if (m_which_food) {
      m_food->changeExtraFoodPos(m_snake->getBody());
      m_clock_extra.restart();
    } else {
      m_food->changeFoodPos(m_snake->getBody());
      m_snake->addLen();
    }
    showScore("Score: ", m_score, 10, 5);
    m_clock.restart();
  }
  
  if (elapsed2.asSeconds() >= 4) {
    m_food->drawExtraFood();
    m_food->changeExtraFoodPos(m_snake->getBody());
    m_clock_extra.restart();
  }

  gameSpeed += m_snake->getLen();
  m_window->setFramerateLimit(gameSpeed >= 50 ? 50 : gameSpeed);
  m_window->display();
  m_window->clear();
}

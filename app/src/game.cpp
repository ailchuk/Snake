#include "game.h"

Game::Game(sf::RenderWindow* window) : m_window(window) {
  init();
  snake = new Snake(window);
  food = new Food(window);
}

void Game::init() {
  m_font.loadFromFile("app/resources/ArialRegular.ttf");
  m_endgame = false;
  m_score = 0;

  m_scoreLabel.setFont(this->m_font);
  m_scoreLabel.setString("Score: " + std::to_string(m_score));
  m_scoreLabel.setPosition(sf::Vector2f(10, 5));
}

bool Game::isRunning() { return m_window->isOpen(); }

void Game::updateEvents() {
  while (m_window->pollEvent(m_winEvent) && !m_endgame) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
      m_window->close();
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
      snake->changeMoveDirection(sf::Vector2<int>(-1, 0));
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
      snake->changeMoveDirection(sf::Vector2<int>(1, 0));
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
      snake->changeMoveDirection(sf::Vector2<int>(0, -1));
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
      snake->changeMoveDirection(sf::Vector2<int>(0, 1));
  }
}

void Game::render() {
  m_window->draw(m_scoreLabel);
  food->drawFood();
  snake->drawSnake();
  snake->moveSnake();

  sf::Time elapsed1 = clock.getElapsedTime();
  if (elapsed1.asSeconds() >= 4) {
    snake->subtractLen();
    clock.restart();
  }
  if (snake->checkCollisions() || snake->getLen() == 2)
    m_endgame = true;

  if (food->checkFood(snake->getBody())) {
    m_scoreLabel.setString("Score: " + std::to_string(++m_score));
    snake->addLen();
    food->changeFoodPos(snake->getBody());
    clock.restart();
  }

  int gameSpeed = 20 - snake->getLen();
  m_window->setFramerateLimit(gameSpeed <= 10 ? 10 : gameSpeed);
  m_window->display();
  m_window->clear();
}

#include "game.h"

Game::Game(sf::RenderWindow* window) : m_window(window) {
  init();

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

void Game::Events() {
  // while (m_window->pollEvent(m_winEvent) && !m_endgame) {

  // }
}

void Game::update() {
  Events();
}

void Game::render() {
  m_window->clear();
  m_window->draw(m_scoreLabel);

  m_window->display();
}
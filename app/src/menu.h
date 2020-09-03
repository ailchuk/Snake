#pragma once

#include "header.h"

class Game;

enum Button {
  NONE = 0,
  NEW = 1,
  BOARD = 2,
  EXIT = 3,
  BACK = 4
};

class Menu {
 public:
  Menu();
  void init_menu(sf::RenderWindow& window);
  void swap_sprites(sf::Sprite& new_b, sf::Sprite& board_b,
                    sf::Sprite& exit_b, sf::RenderWindow& window);
  void leaderboard(sf::RenderWindow& window);
  void startGame(sf::RenderWindow& window);
  void showDeadMenu(sf::RenderWindow& win, Game& game);
  void SaveResultToFile(int score);
 private:
  bool m_isMenu;
  int m_menuNum;

  sf::Texture m_new_game_text;
  sf::Texture m_board_text;
  sf::Texture m_exit_text;
  sf::Texture m_background;
  sf::Texture m_back_to_menu;
};
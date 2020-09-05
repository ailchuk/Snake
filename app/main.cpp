#include "src/header.h"

int main() {
  Menu menu;

  sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT),
                          "Snake", sf::Style::Titlebar | sf::Style::Close);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event))
      if (event.type == sf::Event::Closed)
        window.close();
    menu.initMenu(window);
    window.clear();
    window.display();
  }
  return 0;
}

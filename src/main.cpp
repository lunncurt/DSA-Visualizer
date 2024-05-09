#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Graphics/RenderWindow.hpp"
#include <SFML/Graphics.hpp>
#include "algorithms/sorting.hpp"
#include <vector>

int main() {
  sf::RenderWindow window(sf::VideoMode(1920, 1080), "DSA Visuals");

  int x = 910;
  int y = 910;

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear(sf::Color::Black);

    std::vector<sf::RectangleShape> s = populate(window); 

    window.display();
  }
  return 0;
}

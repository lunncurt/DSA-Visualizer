#include "SFML/Graphics/RenderWindow.hpp"
#include "algorithms/sorting.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

int main() {
  sf::RenderWindow window(sf::VideoMode(1920, 1080), "DSA Visuals");

  std::vector<int> numbers = populate(window);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear(sf::Color::Black);

    insertion(window, numbers);
  }
  return 0;
}

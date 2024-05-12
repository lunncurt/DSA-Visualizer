#include "SFML/Graphics/RenderWindow.hpp"
#include <SFML/Graphics.hpp>
#include "algorithms/sorting.hpp"
#include <vector>

int main() {
  sf::RenderWindow window(sf::VideoMode(1920, 1080), "DSA Visuals");

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear(sf::Color::Black);

    std::vector<int> numbers = populate(window);

    insertion(window, numbers);


  }
  return 0;
}

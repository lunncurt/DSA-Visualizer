#include "sorting.hpp"
#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Graphics/RenderWindow.hpp"
#include <SFML/Graphics.hpp>
#include <time.h>
#include <vector>

std::vector<sf::RectangleShape> populate(sf::RenderWindow &window) {
  srand(time(NULL));

  std::vector<sf::RectangleShape> shapes;

  int amount = 223;

  for (int i = 0; i < amount; i++) {
    sf::RectangleShape x;
    x.setSize(sf::Vector2f(7.5f, static_cast<float>(rand() % 500)));

    if (i == 0) {
      x.setPosition(sf::Vector2f(10, 515 + (500 - x.getSize().y)));
    } else {
      x.setPosition(sf::Vector2f(shapes[i - 1].getPosition().x + 8.5,
                                 515 + (500 - x.getSize().y)));
    }

    shapes.push_back(x);

    window.draw(x);
  }

  return shapes;
}

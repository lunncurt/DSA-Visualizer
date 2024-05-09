#include "sorting.hpp"
#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/System/Time.hpp"
#include "SFML/System/Vector2.hpp"
#include <SFML/Graphics.hpp>
#include <time.h>
#include <vector>

void draw_display(sf::RenderWindow &window, std::vector<int> &vals, int val1, int val2) {
  window.clear();

  sf::RectangleShape prev;

  for (int i = 0; i < vals.size(); i++) {
    sf::RectangleShape temp;
    temp.setSize(sf::Vector2f(7.5f, vals[i]));
    if (i == 0) {
      temp.setPosition(sf::Vector2f(10, 500 + (500 - vals[i])));
    } else {
      temp.setPosition(sf::Vector2f(prev.getPosition().x + 8.5f,
                                    500 + (500 - temp.getSize().y)));
    }

    if (vals[i] == val1 || vals[i] == val2) {
      temp.setFillColor(sf::Color::Blue);
    }

    window.draw(temp);
    prev = temp;
  }

  window.display();
}

std::vector<int> populate(sf::RenderWindow &window) {
  srand(time(NULL));

  std::vector<int> vals;

  int amount = 223;

  for (int i = 0; i < amount; i++) {
    int x;
    x = rand() % 500;

    vals.push_back(x);
  }

  draw_display(window, vals, -1, -1);

  return vals;
}

void insertion(sf::RenderWindow &window, std::vector<int> &vals) {
  for (int i = 1; i < vals.size(); i++) {
    int j = i - 1;
    while (j >= 0 && vals[j + 1] < vals[j]) {
      int temp = vals[j + 1];
      vals[j + 1] = vals[j];
      vals[j] = temp;

      draw_display(window, vals, vals[j], vals[j + 1]);

      j--;
    }
  }
  sf::sleep(sf::milliseconds(5000));
}

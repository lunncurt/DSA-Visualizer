#pragma once

#include "SFML/Graphics/RenderWindow.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

std::vector<int> populate(sf::RenderWindow &window);

void draw_display(sf::RenderWindow &window, std::vector<int> &vals, int j, int j1);

void insertion(sf::RenderWindow &window, std::vector<int> vals);

void merge(sf::RenderWindow &window, std::vector<int> vals);

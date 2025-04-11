#pragma once
#include <SFML/Graphics.hpp>

class Flower {
public:
    Flower(sf::RenderWindow& win); // ???????
    void draw(); // ??????????

private:
    sf::RenderWindow& window;

    // ????
    sf::CircleShape center;
    sf::CircleShape petal1;
    sf::CircleShape petal2;
    sf::CircleShape petal3;
    sf::CircleShape petal4;
};

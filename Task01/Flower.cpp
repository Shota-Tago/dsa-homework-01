#include "Flower.h"

Flower::Flower(sf::RenderWindow& win) : window(win) {
    center.setRadius(20);
    center.setFillColor(sf::Color::Yellow);
    center.setPosition(sf::Vector2f(300, 300));

    petal1.setRadius(15);
    petal1.setFillColor(sf::Color::Magenta);
    petal1.setPosition(sf::Vector2f(280, 280));

    petal2 = petal1;
    petal2.setPosition(sf::Vector2f(320, 280));

    petal3 = petal1;
    petal3.setPosition(sf::Vector2f(280, 320));

    petal4 = petal1;
    petal4.setPosition(sf::Vector2f(320, 320));
}

void Flower::draw() {
    window.draw(petal1);
    window.draw(petal2);
    window.draw(petal3);
    window.draw(petal4);
    window.draw(center);
}

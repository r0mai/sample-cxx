#include <iostream>
#include <SFML/Graphics.hpp>

#include "sample.hpp"

int main() {

    std::cout << "Hello world from sample: " << foo() << std::endl;

    sf::Window App(sf::VideoMode(800, 600), "myproject");

    while (App.isOpen()) {
        sf::Event Event;
        while (App.pollEvent(Event)) {
            if (Event.type == sf::Event::Closed) {
                App.close();
            }
        }
        App.display();
    }
}

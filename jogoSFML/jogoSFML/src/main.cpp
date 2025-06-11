#include <SFML/Graphics.hpp>
//#include "ente.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "SFML works!");
    //topleft
   sf::RectangleShape topLeft({200.f, 100.f});
    topLeft.setFillColor(sf::Color::White);
    

    //topright
    sf::RectangleShape topRight({500.f, 100.f});
    topRight.setFillColor(sf::Color::Black);
    topRight.setOrigin({200.f, 0.f});
    topRight.setPosition({1920.f, 0.f});

    sf::Event event;
    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Red);
        window.draw(topLeft);
        window.draw(topRight);
        window.display();
    }

    return 0;
}


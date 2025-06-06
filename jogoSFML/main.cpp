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

/*int main(){
    sf::RenderWindow window(sf::VideoMode{800, 600}, "Athon");
    
    while(window.isOpen()){
        sf::Event event;

        if(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                //window.close();
                sf::RenderWindow window(sf::VideoMode{800, 600}, "Athon2");
            }
        }
    }


}*/


/*#include <SFML/Graphics.hpp>

int main() {
    std::vector<sf::RenderWindow*> janelas;

    // Cria a primeira janela
    janelas.push_back(new sf::RenderWindow(sf::VideoMode(800, 600), "Athon"));

    while (!janelas.empty()) {
        for (size_t i = 0; i < janelas.size(); ++i) {
            sf::RenderWindow* window = janelas[i];

            sf::Event event;
            while (window->pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    // Em vez de fechar, abrir nova janela!
                    janelas.push_back(new sf::RenderWindow(sf::VideoMode(800, 600), "Athon... de novo!"));
                }
            }

            if (window->isOpen()) {
                window->clear(sf::Color::Black);
                window->display();
            }
        }
    }

    return 0;
}*/

#include "include\ente.hpp"

CroMagnon::Ente::nextId(0); //Atributo Estático é inicializado fora da declaração da classe.

CroMagnon::Ente::Ente(sf::Drawable* figura): id(nextId++), pFig(figura){}

CroMagnon::Ente::Ente(): id(nextId++){
    //Cria um retângulo padrão como figura
    sf::RectangleShape* retangulo = new sf::RectangleShape(sf::Vector2f(50.f, 50.f));
    retangulo->setFillColor(sf::Color::Blue);
    pFig = retangulo;
}

CroMagnon::Ente::~Ente(){
    if(pFig){
        delete pFig;
        pFig = nullptr;
    }
}

void CroMagnon::Ente::desenhar(sf::RenderWindow& janela) {
    if (pFig) {
        janela.draw(*pFig);
    }
}

int CroMagnon::Ente::getId() const { return id; }

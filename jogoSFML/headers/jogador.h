#include "stdafx.h"

class Jogador{

private:
    int pontos;
    sf::Vector2f vel;
public:
    Jogador();
    ~Jogador();
    void executar();
    
};
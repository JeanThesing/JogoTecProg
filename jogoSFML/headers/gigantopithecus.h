#include "stdafx.h"
#include "inimigo.h"

class Gigantopithecus{

private:
    short int forca;
public:
    Gigantopithecus();
    ~Gigantopithecus();
    void danificar(Jogador* p);
    void executar();
    short int getForca();
    void setForca(short int strenght);

};
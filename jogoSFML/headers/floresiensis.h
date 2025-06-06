#include "stdafx.h"
#include "inimigo.h"

class Floresiensis{

private:
    float raio;
public:
    Floresiensis();
    ~Floresiensis();
    void danificar(Jogador* p);
    void executar();
    float getRaio();
    void setRaio(float r);

};
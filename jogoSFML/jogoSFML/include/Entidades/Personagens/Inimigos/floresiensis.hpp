#include "stdafx.h"
#include "inimigo.h"

class Floresiensis : public Inimigo {

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
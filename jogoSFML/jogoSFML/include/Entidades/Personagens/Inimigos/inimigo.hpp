#include "stdafx.h"
#include "personagem.h"
#include "jogador.h"

class Inimigo : public Personagem {

protected:
    int nivel_maldade;
public:
    Inimigo();
    ~Inimigo();
    void salvarDataBuffer();
    virtual void executar() = 0;
    virtual void danificar(Jogador* p) = 0;

};
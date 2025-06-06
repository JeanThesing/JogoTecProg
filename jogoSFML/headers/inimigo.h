#include "stdafx.h"
#inclue "jogador.h"

class Inimigo{

protected:
    int nivel_maldade;
public:
    Inimigo();
    ~Inimigo();
    void salvarDataBuffer();
    virtual void executar() = 0;
    virtual void danificar(Jogador* p) = 0;

};
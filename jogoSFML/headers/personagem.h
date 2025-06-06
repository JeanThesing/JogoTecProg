#include "stdafx.h"

class Personagem{

protected:
    int num_vidas;
public:
    Personagem();
    ~Personagem();
    salvarDataBuffer();
    virtual void mover();
    virtual void executar() = 0;
};
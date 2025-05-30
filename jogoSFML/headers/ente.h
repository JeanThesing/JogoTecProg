#include "stdafx.h"

class Ente{

protected:
    int id;
    //static Gerenciador_Grafico *pGG;
    //Fiigura *pFig

public:
    Ente();
    virtual ~Ente();
    virtual void executar() = 0;
    void desenhar();
};
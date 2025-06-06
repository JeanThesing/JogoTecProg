#include "stdafx.h"

class Entidade{

protected:
    int x, y;
    std::ostream buffer;
public:
    Entidade();
    virtual ~Entidade();

    virtual void executar() = 0;
    virtual void salvar() = 0;      

    void salvarDataBuffer();
};
#include "stdafx.h"
#include "ente.h"
//#include "gcolision.h"

namespace Fases{

class Fase : public Ente {

private:    
    //GColision GC
public:
    Fase();
    ~Fase();
    virtual void executar();
    void gerenciador_colisoes();
    void criaInimFaceis();
    void criaPlataformas();
    virtual void criaInimigos() = 0;
    virtual void criaObstaculos() = 0;
    void criaCenario();
};

}
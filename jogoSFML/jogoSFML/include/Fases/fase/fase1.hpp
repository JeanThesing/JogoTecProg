#include "stdafx.h"
#include "fase.h"
#define MAX 5

namespace Fases{

class Fase1 : public Fase{

public:
    const int maxInimMedios = 5;
    Fase1();
    ~Fase1();
    void criaInimMedios();
    void criaObstMedios();
};

}
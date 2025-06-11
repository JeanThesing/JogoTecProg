#include "stdafx.h"
#include "fase.h"
#define MAX 1

namespace Fases{

class Fase2 : public Fase{

public:
    const int maxChefoes = MAX;
    Fase2();
    ~Fase2();
    void criaChefoes();
    void criaObstMedios();
    void criaObstDificil();
    void criaProjeteis();
};

}
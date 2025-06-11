#include "stdafx.h"

#include "Gerenciadores\gergraf.hpp"
#include "Entidades\Personagens\jogador.hpp"

namespace CroMagnon{

    class Principal{
    private:
        Gerenciadores::GerGraf* pGG;
        Entidades::Personagens::Jogador* pJog1;
        Entidades::Personagens::Jogador* pJog2;
    public:
        Principal();
        ~Principal();
        void executar();
    };
}

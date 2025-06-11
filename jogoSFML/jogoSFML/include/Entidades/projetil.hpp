#include "stdafx.h"
#include "entidade.h"

namespace Entidades{

    class Projetil : public Entidade {

    protected:
        bool ativo;
    public:
        Projetil();
        ~Projetil();
        void executar;
    };

}
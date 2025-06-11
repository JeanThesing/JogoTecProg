#include "stdafx.h"
#include "entidade.h"

namespace Entidades{
    namespace Personagens{

        class Personagem : public Entidade {

        protected:
            int num_vidas;
        public:
            Personagem();
            ~Personagem();
            salvarDataBuffer();
            virtual void mover();
            virtual void executar() = 0;
        };
    }
}
#include "stdafx.h"
#include "personagem.h"

namespace Entidades{
    namespace Personagens{

        class Jogador : public Personagem {

        private:
            int pontos;
            sf::Vector2f vel;
        public:
            Jogador();
            ~Jogador();
            void executar();
            
        };
    }
}
#include "stdafx.h"
#include "ente.h"

namespace CroMagnon {

    namespace Gerenciadores{

        class GerGraf {
        private:
            sf::RenderWindow* janela;
            static GerGraf* pGraf;

            GerGraf(); //Construtora privada faz parte do padrão de projeto: Singleton.
        public:
            ~GerGraf();
            static GerGraf* getGerGraf();
            sf::RenderWindow* getWindow();
            void desenharEnte(Ente* pE);
            void exibir();
            void limpaJanela();
            void fechaJanela();
            const bool isJanelaAberta();
        };
    }
}
#include "stdafx.h"
#include "gergraf.hpp"

namespace CroMagnon{

    class Ente {

    protected:
        static int nextId;
        int id;

        //sf::Transformable transform; APLICAR ISSO POSTERIORMENTE
        sf::Drawable* pFig;
    
    public:
        Ente(sf::Drawable* figura);
        Ente(); 
        virtual ~Ente();

        int getId() const;
        void desenhar(sf::RenderWindow& janela);

        virtual void executar() = 0;
    };
}
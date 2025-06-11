#include "include\Gerenciadores\gergraf.hpp"

/*Inicialização do ponteiro static do Gerenciador Gráfico*/
GerGraf* Gerenciadores::GerGraf::pGraf = nullptr; 

Gerenciadores::GerGraf::GerGraf(): janela(nullptr){
    janela = new sf::RenderWindow(sf::VideoMode(1280.f, 720.f), "Cro-Magnon");
}

Gerenciadores::GerGraf::~GerGraf(){
    if(janela){
        delete(janela);
        janela = nullptr;
    }
}

void Gerenciadores::GerGraf::desenharEnte(Ente* pE){ //CORRIGIR
    if(janela && pE){
        pE->desenhar(*janela);
    }
}

Gerenciadores::GerGraf* Gerenciadores::GerGraf::getGerGraf(){
    /* Cria a instância de um único Gerenciador Gráfico no projeto, por se tratar 
    do padrão de projeto Singleton
    
    A Construtora do Gerenciador Gráfico é realizada dentro da própria classe,
    por se tratar de um método privado.
    */

    if(pGraf == nullptr){
        pGraf = new GerGraf();
    }
    return pGraf;
}

sf::RenderWindow* Gerenciadores::GerGraf::getWindow(){ return janela; } 

void Gerenciadores::GerGraf::exibir(){
    if(janela){
        janela->display();
    }
}
void Gerenciadores::GerGraf::limpaJanela(){
    if(janela){
        janela->clear();
    }
}
void Gerenciadores::GerGraf::fechaJanela(){
    if(janela){
        janela->close();
    }
}
const bool Gerenciadores::GerGraf::isJanelaAberta(){
    if(janela){
        //return static_cast<bool>(janela->isOpen());
        return janela->isOpen();
    }
    return false;
}
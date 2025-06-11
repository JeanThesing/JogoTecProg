#include "include\Principal.hpp"

//Instancia o Gerenciador Gráfico estático na Construtora da classe Principal

CroMagnon::Principal::Principal(): pGG(pGG->getGerGraf()), pJog1(nullptr), pJog2(nullptr){
     if(pGG == nullptr){
        cout << "ERROR::Principal Nao foi possivel instanciar o Gerenciador Grafico." << endl;
        exit(1);
     }
}

CroMagnon::Principal::~Principal(){}

void CroMagnon::Principal::executar(){}

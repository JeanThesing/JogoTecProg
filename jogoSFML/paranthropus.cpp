#include "paranthropus.h"

 Paranthropus::Paranthropus(): tamanho(0){}
Paranthropus::~Paranthropus(){}
void Paranthropus::danificar(Jogador* p){}
void Paranthropus::executar(){}
int Paranthropus::getTamanho(){ return tamanho; }
void Paranthropus::setTamanho(int tam){
    if(tam > 0){
        tamanho = tam;
    }
}

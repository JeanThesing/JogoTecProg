#include "floresiensis.h"

Floresiensis::Floresiensis(){}
Floresiensis::~Floresiensis(){}
void Floresiensis::danificar(Jogador* p){}
void Floresiensis::executar(){}
float Floresiensis::getRaio(){ return raio; }
void Floresiensis::setRaio(float r){
    if(r >= 0){ raio = r; }
    else{
        cout << "O raio nao pode ser negativo" << endl;
    }
}
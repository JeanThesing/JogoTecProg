#include "stdafx.h"
#include "inimigo.h"

class Paranthropus{

private:
    int tamanho;
public:
    Paranthropus();
    ~Paranthropus();
    void danificar(Jogador* p);
    void executar();
    int getTamanho();
    void setTamanho(int tam);

};
#include "stdafx.h"
#include "..\headers\ente.h"
//#include "jogo.h"
class Jogo;

class Menu{

private:
    Jogo* pJog;
public:
    Menu();
    ~Menu();
    void executar();
    void save();
    void load();
    void score();
};
#include "stadfx.h"

#include "ente.h"

class Personagem{

protected:
  int num_vidas;

public:
  Personagem();
  ~Personagem();
  void salvarDataBuffer();
  virtual void executar() = 0;
  virtual void salvar() = 0;
  virtual void mover() = 0;
};

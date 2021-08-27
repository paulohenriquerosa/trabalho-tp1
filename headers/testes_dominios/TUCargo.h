/// @author: Bianca Glycia Boueri 17/0161561
#ifndef TUCargo_H
#define TUCargo_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Cargo.h"

using namespace std;

/// \brief Classe de teste de unidade de Cargo.
class TUCargo
{
private:
  const string CARGO_VALIDO = "ator";
  const string CARGO_INVALIDO = "terror";
  Cargo *cargo;
  int estado;
  void setUp();
  void tearDown();
  void testarCenarioSucesso();
  void testarCenarioFalha();

public:
  const static int SUCESSO = 0;
  const static int FALHA = -1;
  int run();
};

#endif //TUCargo_H
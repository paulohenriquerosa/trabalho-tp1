/// @author: Bianca Glycia Boueri 17/0161561

#ifndef TUCapacidade_H
#define TUCapacidade_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Capacidade.h"

using namespace std;

/// \brief Classe de teste de unidade de Capacidade

class TUCapacidade
{
private:
  const int CAPACIDADE_VALIDA = 400;
  const int CAPACIDADE_INVALIDA = 888;
  Capacidade *capacidade;
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

#endif //TUCapacidade_H
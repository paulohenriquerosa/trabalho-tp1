/// @author: Bianca Glycia Boueri 17/0161561

#ifndef TUNome_H
#define TUNome_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Nome.h"

using namespace std;

/// \brief Classe de teste de unidade de Nome
class TUNome
{
private:
  const string NOME_VALIDO = "Paulo Henrique Rosa";
  const string NOME_INVALIDO = "paulo henrique rosa";
  Nome *nome;
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

#endif //TUNome_H
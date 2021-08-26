/// @author: Bianca Glycia Boueri 17/0161561

#ifndef TUTelefone_H
#define TUTelefone_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Telefone.h"

using namespace std;

/// \brief Classe de teste de unidade de Tipo
class TUTelefone
{
private:
  const string TELEFONE_VALIDO = "(11)-123456789";
  const string TELEFONE_INVALIDO = "(11)-12345678910";
  Telefone *telefone;
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

#endif //TUTelefone_H
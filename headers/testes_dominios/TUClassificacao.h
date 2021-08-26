/// @author: Paulo Henrique Rosa 17/0163687

#ifndef TUCLASSIFICACAO_H
#define TUCLASSIFICACAO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Classificacao.h"

using namespace std;

/// \brief Classe de teste de unidade de Classificacao
class TUClassificacao
{
private:
    const string CLASSIFICACAO_VALIDA = "livre";
    const string CLASSIFICACAO_INVALIDA = "21";
    Classificacao *classificacao;
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

#endif //TUCLASSIFICACAO_H
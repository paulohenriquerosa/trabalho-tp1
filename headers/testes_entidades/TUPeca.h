/// @author: Paulo Henrique Rosa 17/0163687

#ifndef TUPECA_H
#define TUPECA_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../entidades/Peca.h"

using namespace std;

/// \brief Classe de teste de unidade da entidade Peca
class TUPeca
{
private:
    const string IDENTIFICADOR_VALIDO = "Paulo Henrique";
    const string NOME_VALIDO = "Paulo Henrique";
    const string TIPO_VALIDO = "auto";
    const string CLASSIFICACAO_VALIDA = "auto";
    Peca *peca;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

#endif // TUPECA_H
/// @author: Paulo Henrique Rosa 17/0163687

#ifndef TUSESSAO_H
#define TUSESSAO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../entidades/Sessao.h"

using namespace std;

/// \brief Classe de teste de unidade da entidade Sessao.
class TUSessao
{
private:
    const string IDENTIFICADOR_VALIDO = "AB1234";
    const string DATA_VALIDA = "17/12/2017";
    const string HORARIO_VALIDO = "14:30";
    Sessao *sessao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

#endif // TUSESSAO_H
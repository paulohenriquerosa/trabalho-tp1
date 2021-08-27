/// @author: Paulo Henrique Rosa 17/0163687

#ifndef TUSALA_H
#define TUSALA_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../entidades/Sala.h"

using namespace std;

/// \brief Classe de teste de unidade da entidade Sala
class TUSala
{
private:
    const string IDENTIFICADOR_VALIDO = "AB1234";
    const string NOME_VALIDO = "Sala1";
    const static int CAPACIDADE_VALIDO = 400;
    Sala *sala;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

#endif // TUSALA_H
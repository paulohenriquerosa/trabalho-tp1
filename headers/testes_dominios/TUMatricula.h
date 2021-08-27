/// @author: Maria Claudia Campos Martins 17/0109968

#ifndef TUMatricula_H
#define TUMatricula_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Matricula.h"

using namespace std;

/// \brief Classe de teste de unidade de Matricula.
class TUMatricula
{
private:
    const string MATRICULA_VALIDA = "12345";
    const string MATRICULA_INVALIDA = "123456";
    Matricula *matricula;
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

#endif //TUMatricula_H
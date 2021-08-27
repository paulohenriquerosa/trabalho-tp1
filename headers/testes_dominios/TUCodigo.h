/// @author: Maria Claudia Campos Martins 17/0109968

#ifndef TUCodigo_H
#define TUCodigo_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Codigo.h"

using namespace std;

/// \brief Classe de teste de unidade de Codigo.
class TUCodigo
{
private:
    const string CODIGO_VALIDO = "AB1234";
    const string CODIGO_INVALIDO = "01ABCD";
    Codigo *codigo;
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

#endif //TUCodigo_H
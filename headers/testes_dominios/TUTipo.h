/// @author: Maria Claudia Campos Martins 17/0109968

#ifndef TUTipo_H
#define TUTipo_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Tipo.h"

using namespace std;

/// \brief Classe de teste de unidade de Tipo.
class TUTipo
{
private:
    const string TIPO_VALIDO = "auto";
    const string TIPO_INVALIDO = "terror";
    Tipo *tipo;
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

#endif //TUTipo_H
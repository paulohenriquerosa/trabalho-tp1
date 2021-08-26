/// @author: Paulo Henrique Rosa 17/0163687

#ifndef TUHORARIO_H
#define TUHORARIO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Horario.h"

using namespace std;

/// \brief Classe de teste de unidade de Horario
class TUHorario
{
private:
    const string HORARIO_VALIDO = "14:30";
    const string HORARIO_INVALIDO = "14:31";
    Horario *horario;
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

#endif //TUHORARIO_H
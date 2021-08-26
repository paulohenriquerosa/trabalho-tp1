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

/// \brief Classe de teste de unidade da entidade Sessao


class TUSessao {
private:
    const string IDENTIFICADOR_VALIDO   = "";
    const string DATA_VALIDO   = "";
    const string HORARIO_VALIDO   = "";
    Sessao *sessao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();          
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;    
    int run();
};

#endif // TUSESSAO_H
/// @author: Paulo Henrique Rosa 17/0163687

#ifndef TUSENHA_H
#define TUSENHA_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Senha.h"

using namespace std;

/// \brief Classe de teste de unidade de Senha
class TUSenha
{
private:
    const string SENHA_VALIDA = "paulo@1810";
    const string SENHA_INVALIDA = "Paul";
    Senha *senha;
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

#endif //TUSENHA_H
/// @author: Paulo Henrique Rosa 17/0163687

#ifndef TUEMAIL_H
#define TUEMAIL_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../dominios/Email.h"

using namespace std;

/// \brief Classe de teste de unidade de Email
class TUEmail
{
private:
    const string EMAIL_VALIDO = "paulo@example.com";
    const string EMAIL_INVALIDO = ".paulo@example.com";
    Email *email;
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

#endif //TUEMAIL_H
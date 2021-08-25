#ifndef SESSAO_H
#define SESSAO_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "Codigo.h"
#include "Data.h"

using namespace std;

/// \brief Classe que caracteriza uma sessão do espetáculo.
class Sessao
{
private:
    Codigo *identificador;
    Data *data;
    string horario;

    // terminar de incluir outros dominios e metodos
};

#endif //SESSAO_H
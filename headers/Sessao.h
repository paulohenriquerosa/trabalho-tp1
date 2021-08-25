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
    Codigo identificador;
    Data data;
    string horario;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setData(const Data &);
    Data getData() const;
};

#endif //SESSAO_H
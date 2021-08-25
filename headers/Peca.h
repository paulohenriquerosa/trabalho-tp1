#ifndef PECA_H
#define PECA_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "Codigo.h"
#include "Tipo.h"

using namespace std;

/// \brief Classe que designa uma peça de espetáculo.
class Peca
{
private:
    Codigo identificador;
    string nome;
    Tipo tipo;
    string classificacao;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setTipo(const Tipo &);
    Tipo getTipo() const;
};

#endif //PECA_H
#ifndef SALA_H
#define SALA_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "Codigo.h"

using namespace std;

/// \brief Classe relativa às salas de espetáculos.
class Sala
{
private:
    Codigo identificador;
    string nome;
    string capacidade;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
};

#endif //SALA_H
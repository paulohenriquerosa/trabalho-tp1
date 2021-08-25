/// @author: Maria Claudia Campos Martins 17/0109968

#ifndef CODIGO_H
#define CODIGO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe responsável pela identificação das entidades através de
/// uma string que contém letras e dígitos.

class Codigo
{
private:
    string codigo;
    void validar(string);

public:
    void setCodigo(string);
    string getCodigo() const;
};

#endif //CODIGO_H

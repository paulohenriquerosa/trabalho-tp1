/// @author: Maria Claudia Campos Martins 17/0109968

#ifndef TIPO_H
#define TIPO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe que indica o tipo da peça a ser apresentada.
class Tipo
{
private:
    string tipo;
    void validar(string);

public:
    void setTipo(string);
    string getTipo() const;
};

#endif //TIPO_H
/// @author: Maria Claudia Campos Martins 17/0109968

#ifndef MATRICULA_H
#define MATRICULA_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe responsável por criar um objeto de matrícula,
/// com 5 dígitos de 0 a 9.
class Matricula
{
private:
    string matricula;
    void validar(string);

public:
    void setMatricula(string);
    string getMatricula() const;
};

#endif //MATRICULA_H
#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "Matricula.h"

using namespace std;

/// \brief Classe relativa a dados do participante da peça
class Participante
{
private:
    Matricula matricula;
    string nome;
    string sobrenome;
    string email;
    string telefone;
    string senha;
    string cargo;

public:
    void setMatricula(const Matricula &);
    Matricula getMatricula() const;
};

#endif //PARTICIPANTE_H
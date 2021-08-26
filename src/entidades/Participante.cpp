
#include "../../headers/entidades/Participante.h"

void Participante::setMatricula(const Matricula &matricula)
{
    this->matricula = matricula;
}

Matricula Participante::getMatricula() const
{
    return matricula;
}
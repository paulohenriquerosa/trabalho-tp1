#include "../../headers/entidades/Sala.h"

void Sala::setCodigo(const Codigo &codigo)
{
    this->identificador = codigo;
}

Codigo Sala::getCodigo() const
{
    return identificador;
}
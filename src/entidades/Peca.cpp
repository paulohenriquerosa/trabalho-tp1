#include "../../headers/entidades/Peca.h"

void Peca::setCodigo(const Codigo &codigo)
{
    this->identificador = codigo;
};

Codigo Peca::getCodigo() const
{
    return identificador;
};

void Peca::setTipo(const Tipo &tipo)
{
    this->tipo = tipo;
};

Tipo Peca::getTipo() const
{
    return tipo;
};
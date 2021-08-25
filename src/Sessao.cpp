#include "../headers/Sessao.h"

void Sessao::setCodigo(const Codigo &codigo)
{
    this->identificador = codigo;
};
Codigo Sessao::getCodigo() const
{
    return identificador;
};
void Sessao::setData(const Data &data)
{
    this->data = data;
};
Data Sessao::getData() const
{
    return data;
};
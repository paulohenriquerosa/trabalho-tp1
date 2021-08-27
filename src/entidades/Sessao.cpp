/// @author: Maria Claudia Campos Martins 17/0109968

#include "../../headers/entidades/Sessao.h"

/// \brief Armazena o identificador da sessao em um objeto Codigo
/// @param Codigo codigo
void Sessao::setCodigo(const Codigo &codigo)
{
    this->identificador = codigo;
};

/// \brief Retorna o identificador da sessao
/// @param Codigo identificador
Codigo Sessao::getCodigo() const
{
    return identificador;
};

/// \brief Armazena a data da sessao em um objeto Data
/// @param Data data
void Sessao::setData(const Data &data)
{
    this->data = data;
};

/// \brief Retorna a data da sessao
/// @param Data data
Data Sessao::getData() const
{
    return data;
};

/// \brief Armazena o horario da sessao em um objeto Horario
/// @param Horario horario
void Sessao::setHorario(const Horario &horario)
{
    this->horario = horario;
};

/// \brief Retorna a horario da sessao
/// @param Horario horario
Horario Sessao::getHorario() const
{
    return horario;
};
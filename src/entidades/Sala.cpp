#include "../../headers/entidades/Sala.h"

/// \brief Armazena o identificador da sala do espetáculo em um objeto
/// da classe Codigo
/// @param Codigo codigo
void Sala::setCodigo(const Codigo &codigo)
{
    this->identificador = codigo;
}

/// \brief Retorna o identificador da sala armazenado num objeto da classe Codigo
/// @return Codigo identificador
Codigo Sala::getCodigo() const
{
    return identificador;
}

/// \brief Armazena o nome da sala do espetáculo em um objeto
/// da classe Nome
/// @param Nome nome
void Sala::setNome(const Nome &nome)
{
    this->nome = nome;
}

/// \brief Retorna o nome da sala armazenado num objeto da classe Nome
/// @return Nome nome
Nome Sala::getNome() const
{
    return nome;
}

/// \brief Armazena a capacidade da sala do espetáculo em um objeto
/// da classe Capacidade
/// @param Capacidade capacidade
void Sala::setCapacidade(const Capacidade &capacidade)
{
    this->capacidade = capacidade;
}

/// \brief Retorna o capacidade da sala armazenado num objeto da classe Capacidade
/// @return Capacidade capacidade
Capacidade Sala::getCapacidade() const
{
    return capacidade;
}
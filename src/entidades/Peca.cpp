#include "../../headers/entidades/Peca.h"

/// \brief Armazena o codigo desejado em uma classe Codigo
/// @param Codigo codigo
void Peca::setCodigo(const Codigo &codigo)
{
    this->identificador = codigo;
};

/// \brief Retorna o codigo desejado obtido de um objeto da
/// classe Codigo
/// @return Codigo identificador
Codigo Peca::getCodigo() const
{
    return identificador;
};

/// \brief Armazena o tipo da peça em uma classe Tipo
/// @param Tipo tipo
void Peca::setTipo(const Tipo &tipo)
{
    this->tipo = tipo;
};

/// \brief Retorna o tipo desejado obtido de um objeto da
/// classe Tipo
/// @return Tipo tipo
Tipo Peca::getTipo() const
{
    return tipo;
};

/// \brief Armazena o nome da peça em uma classe Nome
/// @param Nome nome
void Peca::setNome(const Nome &nome)
{
    this->nome = nome;
};

/// \brief Retorna o nome desejado obtido de um objeto da
/// classe Nome
/// @return Nome nome
Nome Peca::getNome() const
{
    return nome;
};

/// \brief Armazena a classificação da peça em uma classe Classificacao
/// @param Classificacao classificacao
void Peca::setClassificacao(const Classificacao &classificacao)
{
    this->classificacao = classificacao;
};

/// \brief Retorna o classificacao desejado obtido de um objeto da
/// classe Classificacao
/// @return Classificacao Classificacao
Classificacao Peca::getClassificacao() const
{
    return classificacao;
};
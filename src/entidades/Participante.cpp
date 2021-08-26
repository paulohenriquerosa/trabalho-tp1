
#include "../../headers/entidades/Participante.h"

/// \brief Armazena a matricula do usuario cadastrado no atributo matricula
/// do objeto Participante
/// @param Matricula matricula
void Participante::setMatricula(const Matricula &matricula)
{
    this->matricula = matricula;
}

/// \brief Retorna o valor da matricula do objeto da classe Participante
/// @return Matricula matricula
Matricula Participante::getMatricula() const
{
    return matricula;
}

/// \brief Armazena o nome do usuario cadastrado no atributo matricula
/// do objeto Participante
/// @param Nome nome
void Participante::setNome(const Nome &nome)
{
    this->nome = nome;
}

/// \brief Retorna uma string com o nome, atributo do objeto da classe Participante
/// @return Nome nome
Nome Participante::getNome() const
{
    return nome;
}

/// \brief Armazena o sobrenome do usuario cadastrado no atributo matr�cula
/// do objeto Participante
/// @param Nome nome
// void Participante::setSobrenome(const Nome &sobrenome)
// {
//     this->sobrenome = sobrenome;
// }

// /// \brief Retorna uma string que indica o sobrenome do objeto da classe Participante
// /// @return Nome nome
// Nome Participante::getSobrenome() const
// {
//     return sobrenome;
// }

/// \brief Armazena o email do usuario cadastrado no atributo email
/// do objeto Participante
/// @param Email email
void Participante::setEmail(const Email &email)
{
    this->email = email;
}

/// \brief Retorna uma string contendo o email do objeto da classe Participante
/// @return Email email
Email Participante::getEmail() const
{
    return email;
}

/// \brief Armazena a telefone do usuario cadastrado no atributo telefone
/// do objeto Participante
/// @param Telefone telefone
void Participante::setTelefone(const Telefone &telefone)
{
    this->telefone = telefone;
}

/// \brief Retorna uma string que contém o telefone, atributo do objeto da classe Participante
/// @return Telefone telefone
Telefone Participante::getTelefone() const
{
    return telefone;
}

/// \brief Armazena a senha do usuario cadastrado no atributo senha
/// do objeto Participante
/// @param Senha senha
void Participante::setSenha(const Senha &senha)
{
    this->senha = senha;
}

/// \brief Retorna uma string senha, atributo do objeto da classe Participante
/// @return Senha senha
Senha Participante::getSenha() const
{
    return senha;
}

/// \brief Armazena a cargo do usuario cadastrado no atributo cargo
/// do objeto Participante
/// @param cargo cargo
void Participante::setCargo(const Cargo &cargo)
{
    this->cargo = cargo;
}

/// \brief Retorna o qual o cargo do participante armazenado no atributo cargo
/// do objeto da classe Participante
/// @return Cargo cargo
Cargo Participante::getCargo() const
{
    return cargo;
}

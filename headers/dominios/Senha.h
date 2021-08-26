/// @author: Paulo Henrique Rosa 17/0163687

#ifndef SENHA_H
#define SENHA_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe responsável pela senha da entidade Participante

class Senha
{
private:
  string senha;
  void validar(string);

public:
  void setSenha(string);
  string getSenha() const;
};

/// \brief Retorna a senha do participante armazenada no objeto da classe Senha
/// @return string senha
inline string Senha::getSenha() const
{
  return senha;
}

#endif // SENHA_H
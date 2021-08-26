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

/// \brief Classe responsável pela classificação da entidade Peça


class Senha {
  private:
    string senha;
    void validar(string);

  public:
  void setSenha(string);
  string getSenha() const;

};

inline string Senha::getSenha() const {
  return senha;
}

#endif // SENHA_H
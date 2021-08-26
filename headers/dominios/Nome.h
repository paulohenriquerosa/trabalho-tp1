/// @author: Bianca Glycia Boueri 17/0161561

#ifndef NOME_H
#define NOME_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe que indica o tipo da peça a ser apresentada
class Nome
{
private:
  string nome;
  void validar(string);

public:
  void setNome(string);
  string getNome() const;
};

#endif //NOME_H
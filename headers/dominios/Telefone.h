/// @author: Bianca Glycia Boueri 17/0161561

#ifndef TELEFONE_H
#define TELEFONE_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe responsável pelo telefone da entidade Participante.
class Telefone
{
private:
  string telefone;
  void validar(string);

public:
  void setTelefone(string);
  string getTelefone() const;
};

#endif //TELEFONE_H
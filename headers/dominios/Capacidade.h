/// @author: Bianca Glycia Boueri 17/0161561

#ifndef CAPACIDADE_H
#define CAPACIDADE_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe que indica a capacidade

class Capacidade
{
private:
  int capacidade;
  void validar(int);

public:
  void setCapacidade(int);
  int getCapacidade() const;
};

#endif //CAPACIDADE_H
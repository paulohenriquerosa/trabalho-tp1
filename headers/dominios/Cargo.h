/// @author: Bianca GLycia Boueri 17/0161561

#ifndef CARGO_H
#define CARGO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe que indica o tipo da peça a ser apresentada
class Cargo
{
private:
  string cargo;
  void validar(string);

public:
  void setCargo(string);
  string getCargo() const;
};

#endif //CARGO_H
/// @author: Paulo Henrique Rosa 17/0163687

#ifndef HORARIO_H
#define HORARIO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe responsável pelo horário da entidade Sessao
class Horario {
  private:
    string horario;
    void validar(string);

  public:
  void setHorario(string);
  string getHorario() const;

};
/// \brief Retorna o horario da peça armazenada no objeto da classe Horário
/// @return string horario

inline string Horario::getHorario() const {
  return horario;
}

#endif // HORARIO_H
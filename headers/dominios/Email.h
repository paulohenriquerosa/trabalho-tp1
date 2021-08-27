/// @author: Paulo Henrique Rosa 17/0163687

#ifndef EMAIL_H
#define EMAIL_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe responsável pelo email da entidade Participante.

class Email
{
private:
  string email;
  void validar(string);

public:
  void setEmal(string);
  string getEmail() const;
};

/// \brief Retorna o email do usuário armazenada no objeto da classe Email
/// @return string email

inline string Email::getEmail() const
{
  return email;
}

#endif // EMAIL_H
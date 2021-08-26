/// @author: Bianca Glycia Boueri 17/0161561

#include "../../headers/dominios/Telefone.h"

/*** 
 * A validação do tipo se dá pela verificação se o tipo da peça é
 * auto, comédia, drama, farsa, melodrama, monólogo, musical, ópera,
 * ou revista. Sendo uma verificação sensível a letras e acentos. 
 * ***/
void Telefone::validar(string telefone)
{

  int ddd = (telefone[1] - '0') * 10 + (telefone[2] - '0');

  array<int, 66> permitidos = {11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22,
                               24, 27, 28, 32, 33, 34, 35, 37, 38, 41, 42,
                               43, 44, 45, 46, 47, 48, 49, 51, 53, 54, 55,
                               61, 62, 63, 64, 65, 66, 67, 68, 69, 71, 73,
                               74, 75, 77, 79, 81, 82, 83, 84, 85, 86, 87,
                               88, 89, 91, 92, 93, 94, 95, 96, 97, 98, 99};
  if (find(permitidos.begin(), permitidos.end(), ddd) == permitidos.end())
  {
    throw invalid_argument("Telefone " + telefone + " invalido");
  }

  else if (telefone.length() != 14 || (telefone[5] == '0' && telefone[6] == '0' &&
                                       telefone[7] == '0' && telefone[8] == '0' &&
                                       telefone[9] == '0' && telefone[10] == '0' &&
                                       telefone[11] == '0' && telefone[12] == '0' &&
                                       telefone[13] == '0'))
  {
    throw invalid_argument("Telefone " + telefone + " invalido");
  }

  else if (telefone[0] != '(' || telefone[3] != ')' || telefone[4] != '-')
  {
    throw invalid_argument("Telefone " + telefone + " invalido");
  }

  for (int i = 5; i < 14; i++)
  {
    if (!isdigit(telefone[i]))
    {
      throw invalid_argument("Telefone " + telefone + " invalido");
    }
  }
}

/// \brief Armazena o tipo da peça recebido no atributo do objeto da classe Tipo
/// @param string tipo
void Telefone::setTelefone(string telefone)
{
  validar(telefone);
  this->telefone = telefone;
}

/// \brief Retorna o tipo da peça armazenada no objeto da classe Tipo
/// @return string tipo
string Telefone::getTelefone() const
{
  return telefone;
}
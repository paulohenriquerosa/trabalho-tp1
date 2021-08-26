/// @author: Bianca Glycia Boueri - 17/0161561

#include "../../headers/dominios/Cargo.h"

/*** 
 * A validação do tipo se dá pela verificação se o tipo da peça é
 * auto, comédia, drama, farsa, melodrama, monólogo, musical, ópera,
 * ou revista. Sendo uma verificação sensível a letras e acentos. 
 * ***/
void Cargo::validar(string cargo)
{
  array<string, 6> permitidos = {"ator", "cenografo", "figurinista", "maquiador", "sonoplasta", "iluminador"};
  if (find(permitidos.begin(), permitidos.end(), cargo) == permitidos.end())
  {
    throw invalid_argument("Cargo " + cargo + " invalido");
  }
}

/// \brief Armazena o tipo da peça recebido no atributo do objeto da classe Tipo
/// @param string cargo
void Cargo::setCargo(string cargo)
{
  validar(cargo);
  this->cargo = cargo;
}

/// \brief Retorna o cargo da peça armazenada no objeto da classe cargo
/// @return string cargo
string Cargo::getCargo() const
{
  return cargo;
}
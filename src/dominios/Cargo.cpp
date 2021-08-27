/// @author: Bianca Glycia Boueri - 17/0161561

#include "../../headers/dominios/Cargo.h"

/*** 
 * A validação se dá pela verificação se o cargo do participante é ator, 
 * cenógrafo, figurinista, maquiador, sonoplasta ou iluminador.  
 * ***/
void Cargo::validar(string cargo)
{
  array<string, 6> permitidos = {"ator", "cenografo", "figurinista", "maquiador", "sonoplasta", "iluminador"};
  if (find(permitidos.begin(), permitidos.end(), cargo) == permitidos.end())
  {
    throw invalid_argument("Cargo " + cargo + " invalido");
  }
}

/// \brief Armazena o cargo do participante recebido no atributo do objeto da classe Cargo.
/// @param string cargo
void Cargo::setCargo(string cargo)
{
  validar(cargo);
  this->cargo = cargo;
}

/// \brief Retorna o cargo do participante armazenado no objeto da classe Cargo.
/// @return string cargo
string Cargo::getCargo() const
{
  return cargo;
}
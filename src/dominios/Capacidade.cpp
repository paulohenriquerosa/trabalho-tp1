/// @author: Bianca Glycia Boueri 17/0161561

#include "../../headers/dominios/Capacidade.h"

/*** 
 * A validação do tipo se dá pela verificação se o tipo da peça é
 * auto, comédia, drama, farsa, melodrama, monólogo, musical, ópera,
 * ou revista. Sendo uma verificação sensível a letras e acentos. 
 * ***/
void Capacidade::validar(int capacidade)
{
  array<int, 5> permitidos = {100, 200, 300, 400, 500};
  if (find(permitidos.begin(), permitidos.end(), capacidade) == permitidos.end())
  {
    throw invalid_argument("Capacidade invalida");
  }
}
/// \brief Armazena o tipo da peça recebido no atributo do objeto da classe Tipo
/// @param int tipo

void Capacidade::setCapacidade(int capacidade)
{
  validar(capacidade);
  this->capacidade = capacidade;
}

/// \brief Retorna o tipo da peça armazenada no objeto da classe Tipo
/// @return string tipo

int Capacidade::getCapacidade() const
{
  return capacidade;
}

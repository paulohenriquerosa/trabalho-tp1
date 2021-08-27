/// @author: Bianca Glycia Boueri 17/0161561

#include "../../headers/dominios/Capacidade.h"

/*** 
 * A validação se dá pela verificação se a capacidade da sala é 100, 200, 
 * 300, 400 ou 500 pessoas.
 * ***/
void Capacidade::validar(int capacidade)
{
  array<int, 5> permitidos = {100, 200, 300, 400, 500};
  if (find(permitidos.begin(), permitidos.end(), capacidade) == permitidos.end())
  {
    throw invalid_argument("Capacidade invalida");
  }
}
/// \brief Armazena a capacidade da sala recebida no atributo do objeto da
///classe Capacidade.
/// @param int capacidade

void Capacidade::setCapacidade(int capacidade)
{
  validar(capacidade);
  this->capacidade = capacidade;
}

/// \brief Retorna a capacidade da sala armazenada no objeto da classe Capacidade.
/// @return int capacidade

int Capacidade::getCapacidade() const
{
  return capacidade;
}

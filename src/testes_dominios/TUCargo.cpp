/* Autora: Bianca Glycia Boueri 17/0161561 */

#include "../../headers/testes_dominios/TUCargo.h"

void TUCargo::setUp()
{
  cargo = new Cargo();
  estado = SUCESSO;
}

void TUCargo::tearDown()
{
  delete cargo;
}

void TUCargo::testarCenarioSucesso()
{
  try
  {
    cargo->setCargo(CARGO_VALIDO);
    if (cargo->getCargo() != CARGO_VALIDO)
    {
      estado = FALHA;
    }
  }
  catch (invalid_argument &excecao)
  {
    estado = FALHA;
  }
}

void TUCargo::testarCenarioFalha()
{
  try
  {
    cargo->setCargo(CARGO_INVALIDO);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (cargo->getCargo() == CARGO_INVALIDO)
    {
      estado = FALHA;
    }
  }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUCargo::run()
{
  setUp();
  testarCenarioSucesso();
  testarCenarioFalha();
  tearDown();
  return estado;
}
/* Autora: Bianca Glycia Boueri 17/0161561 */

#include "../../headers/testes_dominios/TUCapacidade.h"

void TUCapacidade::setUp()
{
  capacidade = new Capacidade();
  estado = SUCESSO;
}

void TUCapacidade::tearDown()
{
  delete capacidade;
}

void TUCapacidade::testarCenarioSucesso()
{
  try
  {
    capacidade->setCapacidade(CAPACIDADE_VALIDA);
    if (capacidade->getCapacidade() != CAPACIDADE_VALIDA)
    {
      estado = FALHA;
    }
  }
  catch (invalid_argument &excecao)
  {
    estado = FALHA;
  }
}

void TUCapacidade::testarCenarioFalha()
{
  try
  {
    capacidade->setCapacidade(CAPACIDADE_INVALIDA);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (capacidade->getCapacidade() == CAPACIDADE_INVALIDA)
    {
      estado = FALHA;
    }
  }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado

int TUCapacidade::run()
{
  setUp();
  testarCenarioSucesso();
  testarCenarioFalha();
  tearDown();
  return estado;
}

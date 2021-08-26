/* Autora: Bianca Glycia Boueri 17/0161561 */

#include "../../headers/testes_dominios/TUTelefone.h"

void TUTelefone::setUp()
{
  telefone = new Telefone();
  estado = SUCESSO;
}

void TUTelefone::tearDown()
{
  delete telefone;
}

void TUTelefone::testarCenarioSucesso()
{
  try
  {
    telefone->setTelefone(TELEFONE_VALIDO);
    if (telefone->getTelefone() != TELEFONE_VALIDO)
    {
      estado = FALHA;
    }
  }
  catch (invalid_argument &excecao)
  {
    estado = FALHA;
  }
}

void TUTelefone::testarCenarioFalha()
{
  try
  {
    telefone->setTelefone(TELEFONE_INVALIDO);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (telefone->getTelefone() == TELEFONE_INVALIDO)
    {
      estado = FALHA;
    }
  }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUTelefone::run()
{
  setUp();
  testarCenarioSucesso();
  testarCenarioFalha();
  tearDown();
  return estado;
}

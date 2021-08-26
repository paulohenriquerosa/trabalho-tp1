/* Autora: Bianca Glycia Boueri 17/0161561 */

#include "../../headers/testes_dominios/TUNome.h"

void TUNome::setUp()
{
  nome = new Nome();
  estado = SUCESSO;
}

void TUNome::tearDown()
{
  delete nome;
}

void TUNome::testarCenarioSucesso()
{
  try
  {
    nome->setNome(NOME_VALIDO);
    if (nome->getNome() != NOME_VALIDO)
    {
      estado = FALHA;
    }
  }
  catch (invalid_argument &excecao)
  {
    estado = FALHA;
  }
}

void TUNome::testarCenarioFalha()
{
  try
  {
    nome->setNome(NOME_INVALIDO);
    estado = FALHA;
  }
  catch (invalid_argument &excecao)
  {
    if (nome->getNome() == NOME_INVALIDO)
    {
      estado = FALHA;
    }
  }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUNome::run()
{
  setUp();
  testarCenarioSucesso();
  testarCenarioFalha();
  tearDown();
  return estado;
}
/// @author: Bianca Glycia Boueri 17/0161561

#include "../../headers/testes_entidades/TUPeca.h"

/// \brief Inicializa a instância e variável ao iniciar o teste
/// @return void
void TUPeca::setUp()
{
  peca = new Peca();
  estado = SUCESSO;
}

/// \brief Deleta instância criada após o final do teste
/// @return void
void TUPeca::tearDown()
{
  delete peca;
}

/// \brief Testa os cenário de sucesso dos atributos
/// @return void
void TUPeca::testarCenarioSucesso()
{
  Codigo identificador;
  identificador.setCodigo(IDENTIFICADOR_VALIDO);
  peca->setCodigo(identificador);
  if (peca->getCodigo().getCodigo() != IDENTIFICADOR_VALIDO)
    estado = FALHA;

  Nome nome;
  nome.setNome(NOME_VALIDO);
  peca->setNome(nome);
  if (peca->getNome().getNome() != NOME_VALIDO)
    estado = FALHA;

  Tipo tipo;
  tipo.setTipo(TIPO_VALIDO);
  peca->setTipo(tipo);
  if (peca->getTipo().getTipo() != TIPO_VALIDO)
    estado = FALHA;

  Classificacao classificacao;
  classificacao.setClassificacao(CLASSIFICACAO_VALIDA);
  peca->setClassificacao(classificacao);
  if (peca->getClassificacao().getClassificacao() != CLASSIFICACAO_VALIDA)
    estado = FALHA;
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, e, por fim, deleta o objeto criado,
/// retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUPeca::run()
{
  setUp();
  testarCenarioSucesso();
  tearDown();
  return estado;
}

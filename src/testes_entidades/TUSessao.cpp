/// @author: Bianca GLycia Boueri 17/0161561

#include "../../headers/testes_entidades/TUSessao.h"

/// \brief Inicializa a instância e variável ao inciar o teste
/// @return void
void TUSessao::setUp()
{
  sessao = new Sessao();
  estado = SUCESSO;
}

/// \brief Deleta instância criado após o final do teste
/// @return void
void TUSessao::tearDown()
{
  delete sessao;
}

/// \brief Testa os cenário de sucesso dos atributos
/// @return void
void TUSessao::testarCenarioSucesso()
{
  Codigo identificador;
  identificador.setCodigo(IDENTIFICADOR_VALIDO);
  sessao->setCodigo(identificador);
  if (sessao->getCodigo().getCodigo() != IDENTIFICADOR_VALIDO)
    estado = FALHA;

  Data data;
  data.setData(DATA_VALIDA);
  sessao->setData(data);
  if (sessao->getData().getData() != DATA_VALIDA)
    estado = FALHA;

  Horario horario;
  horario.setHorario(HORARIO_VALIDO);
  sessao->setHorario(horario);
  if (sessao->getHorario().getHorario() != HORARIO_VALIDO)
    estado = FALHA;
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUSessao::run()
{
  setUp();
  testarCenarioSucesso();
  tearDown();
  return estado;
}

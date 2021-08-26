/// @author: Paulo Henrique Rosa 17/0163687

#include "../../headers/testes_dominios/TUClassificacao.h"

void TUClassificacao::setUp()
{
    classificacao = new Classificacao();
    estado = SUCESSO;
}

void TUClassificacao::tearDown()
{
    delete classificacao;
}

void TUClassificacao::testarCenarioSucesso()
{
    try
    {
        classificacao->setClassificacao(CLASSIFICACAO_VALIDA);
        if (classificacao->getClassificacao() != CLASSIFICACAO_VALIDA)
        {
            estado = FALHA;
        }
    }
    catch (invalid_argument &execao)
    {
        estado = FALHA;
    }
}

void TUClassificacao::testarCenarioFalha()
{
    try
    {
        classificacao->setClassificacao(CLASSIFICACAO_INVALIDA);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (classificacao->getClassificacao() == CLASSIFICACAO_INVALIDA)
        {
            estado = FALHA;
        }
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUClassificacao::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

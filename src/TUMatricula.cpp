/* Autora: Maria Claudia Campos Martins 17/0109968 */

#include "../headers/TUMatricula.h"

void TUMatricula::setUp()
{
    matricula = new Matricula();
    estado = SUCESSO;
}

void TUMatricula::tearDown()
{
    delete matricula;
}

void TUMatricula::testarCenarioSucesso()
{
    try
    {
        matricula->setMatricula(MATRICULA_VALIDA);
        if (matricula->getMatricula() != MATRICULA_VALIDA)
        {
            estado = FALHA;
        }
    }
    catch (invalid_argument &execao)
    {
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha()
{
    try
    {
        matricula->setMatricula(MATRICULA_INVALIDA);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (matricula->getMatricula() == MATRICULA_INVALIDA)
        {
            estado = FALHA;
        }
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUMatricula::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

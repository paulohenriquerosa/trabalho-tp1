/* Autora: Maria Claudia Campos Martins 17/0109968 */

#include "../headers/TUData.h"

void TUData::setUp()
{
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown()
{
    delete data;
}

void TUData::testarCenarioSucesso()
{
    try
    {
        data->setData(DATA_VALIDA);
        if (data->getData() != DATA_VALIDA)
        {
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha()
{
    try
    {
        data->setData(DATA_INVALIDA);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (data->getData() == DATA_INVALIDA)
        {
            estado = FALHA;
        }
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUData::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
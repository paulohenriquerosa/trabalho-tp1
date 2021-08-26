/* Autora: Maria Claudia Campos Martins 17/0109968 */

#include "../../headers/testes_dominios/TUTipo.h"

void TUTipo::setUp()
{
    tipo = new Tipo();
    estado = SUCESSO;
}

void TUTipo::tearDown()
{
    delete tipo;
}

void TUTipo::testarCenarioSucesso()
{
    try
    {
        tipo->setTipo(TIPO_VALIDO);
        if (tipo->getTipo() != TIPO_VALIDO)
        {
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUTipo::testarCenarioFalha()
{
    try
    {
        tipo->setTipo(TIPO_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (tipo->getTipo() == TIPO_INVALIDO)
        {
            estado = FALHA;
        }
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUTipo::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
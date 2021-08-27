/// @author: Paulo Henrique Rosa 17/0163687

#include "../../headers/testes_dominios/TUEmail.h"

void TUEmail::setUp()
{
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown()
{
    delete email;
}

void TUEmail::testarCenarioSucesso()
{
    try
    {
        email->setEmal(EMAIL_VALIDO);
        if (email->getEmail() != EMAIL_VALIDO)
        {
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha()
{
    try
    {
        email->setEmal(EMAIL_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (email->getEmail() == EMAIL_INVALIDO)
        {
            estado = FALHA;
        }
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUEmail::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

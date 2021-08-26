/// @author: Paulo Henrique Rosa 17/0163687

#include "../../headers/testes_dominios/TUHorario.h"

void TUHorario::setUp()
{
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown()
{
    delete horario;
}

void TUHorario::testarCenarioSucesso()
{
    try
    {
        horario->setHorario(HORARIO_VALIDO);
        if (horario->getHorario() != HORARIO_VALIDO)
        {
            estado = FALHA;
        }
    }
    catch (invalid_argument &execao)
    {
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha()
{
    try
    {
        horario->setHorario(HORARIO_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (horario->getHorario() == HORARIO_INVALIDO)
        {
            estado = FALHA;
        }
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUHorario::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

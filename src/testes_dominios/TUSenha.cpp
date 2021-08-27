/// @author: Paulo Henrique Rosa 17/0163687

#include "../../headers/testes_dominios/TUSenha.h"

void TUSenha::setUp()
{
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown()
{
    delete senha;
}

void TUSenha::testarCenarioSucesso()
{
    
    try
    {
        senha->setSenha(SENHA_VALIDA);
        if (senha->getSenha() != SENHA_VALIDA)
        {
            estado = FALHA;
        }
        
    }
    catch (invalid_argument &execao)
    {
        estado = FALHA;
    }
    
}

void TUSenha::testarCenarioFalha()
{
    try
    {
        senha->setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (senha->getSenha() == SENHA_INVALIDA)
        {
            estado = FALHA;
        }
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, em seguida, teste um cenário de falha, e,
/// por fim, deleta o objeto criado, retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUSenha::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

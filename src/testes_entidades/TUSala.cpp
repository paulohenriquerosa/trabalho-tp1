/// @author: Paulo Henrique Rosa 17/0163687

#include "../../headers/testes_entidades/TUSala.h"

/// \brief Inicializa a instância e variável ao iniciar o teste
/// @return void
void TUSala::setUp()
{
    sala = new Sala();
    estado = SUCESSO;
}

/// \brief Deleta instância criada após o final do teste
/// @return void
void TUSala::tearDown()
{
    delete sala;
}

/// \brief Testa os cenário de sucesso dos atributos
/// @return void
void TUSala::testarCenarioSucesso()
{
    
    try
    {
        Codigo identificador;
        identificador.setCodigo(IDENTIFICADOR_VALIDO);
        sala->setCodigo(identificador);
        if (sala->getCodigo().getCodigo() != IDENTIFICADOR_VALIDO)
            estado = FALHA;

    }
    catch (invalid_argument &execao)
    {
        estado = FALHA;
    }

    try
    {
        Nome nome;
        nome.setNome(NOME_VALIDO);
        sala->setNome(nome);
        if (sala->getNome().getNome() != NOME_VALIDO)
            estado = FALHA;

    }

    catch (invalid_argument &execao)
    {
        estado = FALHA;
    }

    try
    {
        Capacidade capacidade;
        capacidade.setCapacidade(CAPACIDADE_VALIDO);
        sala->setCapacidade(capacidade);
        if (sala->getCapacidade().getCapacidade() != CAPACIDADE_VALIDO)
            estado = FALHA;
    }

    catch (invalid_argument &execao)
    {
        estado = FALHA;
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, e, por fim, deleta o objeto criado,
/// retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUSala::run()
{
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
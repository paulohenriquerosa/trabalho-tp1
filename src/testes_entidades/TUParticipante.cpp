/// @author: Paulo Henrique Rosa 17/0163687

#include "../../headers/testes_entidades/TUParticipante.h"

/// \brief Inicializa a instância e variável ao iniciar o teste
/// @return void
void TUParticipante::setUp()
{
    participante = new Participante();
    estado = SUCESSO;
}

/// \brief Deleta instância criada após o final do teste
/// @return void
void TUParticipante::tearDown()
{
    delete participante;
}

/// \brief Testa os cenário de sucesso dos atributos
/// @return void
<<<<<<< HEAD
void TUParticipante::testarCenarioSucesso()
{
    Matricula matricula;
    matricula.setMatricula(MATRICULA_VALIDO);
    participante->setMatricula(matricula);
    if (participante->getMatricula().getMatricula() != MATRICULA_VALIDO)
=======
void TUParticipante::testarCenarioSucesso(){
    try
    {
    
        Matricula matricula;
        matricula.setMatricula(MATRICULA_VALIDO);
        participante->setMatricula(matricula);
        if(participante->getMatricula().getMatricula() != MATRICULA_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &execao)
    {
>>>>>>> 5140d202bfa3c9abb18932b9b6000d147e367ac0
        estado = FALHA;
    }

<<<<<<< HEAD
    Nome nome;
    nome.setNome(NOME_VALIDO);
    participante->setNome(nome);
    if (participante->getNome().getNome() != NOME_VALIDO)
=======
    try
    {
        Nome nome;
        nome.setNome(NOME_VALIDO);
        participante->setNome(nome);
        if(participante->getNome().getNome() != NOME_VALIDO)
            estado = FALHA;

    }
    catch (invalid_argument &execao)
    {
>>>>>>> 5140d202bfa3c9abb18932b9b6000d147e367ac0
        estado = FALHA;
    }

    try
    {
        Nome sobrenome;
        sobrenome.setNome(SOBRENOME_VALIDO);
        participante->setSobrenome(sobrenome);
        if(participante->getSobrenome().getNome() != SOBRENOME_VALIDO)
            estado = FALHA;

<<<<<<< HEAD
    Nome sobrenome;
    sobrenome.setNome(SOBRENOME_VALIDO);
    participante->setSobrenome(sobrenome);
    if (participante->getSobrenome().getNome() != SOBRENOME_VALIDO)
=======
    }
    catch (invalid_argument &execao)
    {
>>>>>>> 5140d202bfa3c9abb18932b9b6000d147e367ac0
        estado = FALHA;
    }

    try
    {
        Email email;
        email.setEmal(EMAIL_VALIDO);
        participante->setEmail(email);
        if(participante->getEmail().getEmail() != EMAIL_VALIDO)
            estado = FALHA;

<<<<<<< HEAD
    Email email;
    email.setEmal(EMAIL_VALIDO);
    participante->setEmail(email);
    if (participante->getEmail().getEmail() != EMAIL_VALIDO)
=======
    }
    catch (invalid_argument &execao)
    {
>>>>>>> 5140d202bfa3c9abb18932b9b6000d147e367ac0
        estado = FALHA;
    }

<<<<<<< HEAD
    Telefone telefone;
    telefone.setTelefone(TELEFONE_VALIDO);
    participante->setTelefone(telefone);
    if (participante->getTelefone().getTelefone() != TELEFONE_VALIDO)
=======
    try
    {
        Telefone telefone;
        telefone.setTelefone(TELEFONE_VALIDO);
        participante->setTelefone(telefone);
        if(participante->getTelefone().getTelefone() != TELEFONE_VALIDO)
            estado = FALHA;

    }
    catch (invalid_argument &execao)
    {
>>>>>>> 5140d202bfa3c9abb18932b9b6000d147e367ac0
        estado = FALHA;
    }

    try
    {
        Senha senha;
        senha.setSenha(SENHA_VALIDO);
        participante->setSenha(senha);
        if(participante->getSenha().getSenha() != SENHA_VALIDO)
            estado = FALHA;

<<<<<<< HEAD
    Senha senha;
    senha.setSenha(SENHA_VALIDO);
    participante->setSenha(senha);
    if (participante->getSenha().getSenha() != SENHA_VALIDO)
        estado = FALHA;

    Cargo cargo;
    cargo.setCargo(CARGO_VALIDO);
    participante->setCargo(cargo);
    if (participante->getCargo().getCargo() != CARGO_VALIDO)
=======
    }
    catch (invalid_argument &execao)
    {
        estado = FALHA;
    }

    try
    {
        Cargo cargo;
        cargo.setCargo(CARGO_VALIDO);
        participante->setCargo(cargo);
        if(participante->getCargo().getCargo() != CARGO_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &execao)
    {
>>>>>>> 5140d202bfa3c9abb18932b9b6000d147e367ac0
        estado = FALHA;
    }
}

/// \brief Executa o teste de unidade. Primeiro cria um objeto para o teste,
/// depois, testa um cenário de sucesso, e, por fim, deleta o objeto criado,
/// retornando se o teste causou alguma falha ou não.
/// @return int estado
int TUParticipante::run()
{
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
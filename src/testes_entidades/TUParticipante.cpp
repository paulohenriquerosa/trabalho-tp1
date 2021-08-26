/// @author: Paulo Henrique Rosa 17/0163687

#include "../../headers/testes_entidades/TUParticipante.h"


void TUParticipante::setUp(){
    participante = new Participante();
    estado = SUCESSO;
}

void TUParticipante::tearDown(){
    delete participante;
}

void TUParticipante::testarCenarioSucesso(){
    Matricula matricula;
    matricula.setMatricula(MATRICULA_VALIDO);
    participante->setMatricula(matricula);
    if(participante->getMatricula().getMatricula() != MATRICULA_VALIDO)
        estado = FALHA;

    Nome nome;
    nome.setNome(NOME_VALIDO);
    participante->setNome(nome);
    if(participante->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Nome sobrenome;
    sobrenome.setNome(SOBRENOME_VALIDO);
    participante->setSobrenome(sobrenome);
    if(participante->getSobrenome().getNome() != SOBRENOME_VALIDO)
        estado = FALHA;

    Email email;
    email.setEmal(EMAIL_VALIDO);
    participante->setEmail(email);
    if(participante->getEmail().getEmail() != EMAIL_VALIDO)
        estado = FALHA;

    Telefone telefone;
    telefone.setTelefone(TELEFONE_VALIDO);
    participante->setTelefone(telefone);
    if(participante->getTelefone().getTelefone() != TELEFONE_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setSenha(SENHA_VALIDO);
    participante->setSenha(senha);
    if(participante->getSenha().getSenha() != SENHA_VALIDO)
        estado = FALHA;
        
    Cargo cargo;
    cargo.setCargo(CARGO_VALIDO);
    participante->setCargo(cargo);
    if(participante->getCargo().getCargo() != CARGO_VALIDO)
        estado = FALHA;
}

int TUParticipante::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
/// @author: Paulo Henrique Rosa 17/0163687

#include "../../headers/testes_entidades/TUSala.h"


void TUSala::setUp(){
    sala = new Sala();
    estado = SUCESSO;
}

void TUSala::tearDown(){
    delete sala;
}

void TUSala::testarCenarioSucesso(){

    Codigo identificador;
    identificador.setCodigo(IDENTIFICADOR_VALIDO);
    sala->setCodigo(identificador);
    if(sala->getCodigo().getCodigo() != IDENTIFICADOR_VALIDO)
        estado = FALHA;

    Nome nome;
    nome.setNome(NOME_VALIDO);
    sala->setNome(nome);
    if(sala->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Capacidade capacidade;
    capacidade.setCapacidade(CAPACIDADE_VALIDO);
    sala->setCapacidade(capacidade);
    if(sala->getCapacidade().getCapacidade() != CAPACIDADE_VALIDO)
        estado = FALHA;
}

int TUSala::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
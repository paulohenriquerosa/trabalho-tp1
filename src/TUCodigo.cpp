/* Autora: Maria Claudia Campos Martins 17/0109968 */

#include "../headers/TUCodigo.h"

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(CODIGO_VALIDO);
        if(codigo->getCodigo() != CODIGO_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &execao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(CODIGO_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(codigo->getCodigo() == CODIGO_INVALIDO){
            estado = FALHA; 
        }
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

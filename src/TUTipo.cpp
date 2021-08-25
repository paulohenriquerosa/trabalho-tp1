/* Autora: Maria Claudia Campos Martins 17/0109968 */

#include "../headers/TUTipo.h"

void TUTipo::setUp(){
    tipo = new Tipo();
    estado = SUCESSO;
}

void TUTipo::tearDown(){
    delete tipo;
}

void TUTipo::testarCenarioSucesso(){
    try{
        tipo->setTipo(TIPO_VALIDO);
        if(tipo->getTipo() != TIPO_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &execao){
        estado = FALHA;
    }
}

void TUTipo::testarCenarioFalha(){
    try{
        tipo->setTipo(TIPO_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(tipo->getTipo() == TIPO_INVALIDO){
            estado = FALHA; 
        }
    }
}

int TUTipo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/* Autora: Maria Claudia Campos Martins 17/0109968 */

#include "../headers/TUData.h"

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(DATA_VALIDA);
        if(data->getData() != DATA_VALIDA){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(DATA_INVALIDA);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(data->getData() == DATA_INVALIDA){
            estado = FALHA; 
        }
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
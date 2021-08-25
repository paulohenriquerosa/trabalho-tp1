/* Autora: Maria Claudia Campos Martins 17/0109968 */

#include "../headers/Data.h"

void Data::validar(string data){
    bool dataInvalida = false;
    bool tamanhoInvalido = false;
    int tamanho = data.length();

    if( tamanho == 10 ){
        char arrayData[tamanho + 1];
        strcpy(arrayData, data.c_str());
        char * aux = strtok(arrayData,"/");
        string parte[3];
        int i = 0;
        while(aux != NULL){
            parte[i] = aux;
            i++;
            aux = strtok(NULL, "/");
        }
        if(i!=3){
            dataInvalida = true;
        }else{
            int dia = stoi(parte[0]);
            int mes = stoi(parte[1]);
            int ano = stoi(parte[2]);
            if(!(dia >= 1 && dia <= 31) || !(mes >= 1 && mes <= 12) || !(ano >= 2000 && ano <= 9999) ){
                dataInvalida = true;
            }
            if(ano%4 == 0 && mes == 2 && dia > 29){
                dataInvalida = true;
            }
        }
    }else{
        tamanhoInvalido = true;
    }

    if(tamanhoInvalido){
        throw invalid_argument("Tamanho da data inválido.");
    }
    if(dataInvalida){
        throw invalid_argument("Data " + data + " inválida.");
    }
}

void Data::setData(string data){
    validar(data);
    this->data = data;
}

string Data::getData() const {
    return data;
}
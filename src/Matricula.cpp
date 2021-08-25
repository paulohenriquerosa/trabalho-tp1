/* Autora: Maria Claudia Campos Martins 17/0109968 */

#include "../headers/Matricula.h"

void Matricula::validar(string matricula){
    bool digitoInvalido = false;
    bool tamanhoInvalido = false;
    int tamanho = matricula.length();

    if(tamanho == 5){
        for(int i = 1; i< tamanho; i++){
            if(matricula[i] == matricula[i-1]){
                digitoInvalido = true;
                break;
            }
            if(!(matricula[i] >= '0' && matricula[i] <= '9')){
                digitoInvalido = true;
                break;
            }
        }
    }else{
        tamanhoInvalido = true;
    }

    if(digitoInvalido){
        throw invalid_argument("Matricula " + matricula + " invalida");
    }
    if(tamanhoInvalido){
        throw invalid_argument("Tamanho de matricula não permitido.");
    }
}

void Matricula::setMatricula(string matricula){
    validar(matricula);
    this->matricula = matricula;
}

string Matricula::getMatricula() const {
    return matricula;
}

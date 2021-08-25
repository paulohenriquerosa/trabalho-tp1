#include "../headers/Codigo.h"

void Codigo::validar(string codigo){
    bool codigoInvalido = false;
    bool tamanhoInvalido = false;
    int tamanho = codigo.length();

    if(tamanho == 6){
        for(int i = 0; i < 2; i++){
            if((codigo[i] < 'A' && codigo[i] > 'Z')){
                codigoInvalido = true;
            }
        }
        for(int i = 2; i < tamanho; i++){
            if(!(codigo[i] >= '0' && codigo[i] <= '9')){
                codigoInvalido = true;
            }
        }
    }else{
        tamanhoInvalido = true;
    }

    if(tamanhoInvalido){
        throw invalid_argument("Tamanho de código inválido.");
    }
    if(codigoInvalido){
        throw invalid_argument("Código " + codigo + " invalido.");
    }

}

void Codigo::setCodigo(string codigo){
    validar(codigo);
    this->codigo = codigo;
}

string Codigo::getCodigo() const{
    return codigo;
}; 
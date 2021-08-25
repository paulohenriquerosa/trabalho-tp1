#include "../headers/Tipo.h"

void Tipo::validar(string tipo){
    array<string, 9> permitidos = {"auto", 
                                "comédia",
                                "drama",
                                "farsa",
                                "melodrama",
                                "monólogo",
                                "musical",
                                "ópera",
                                "revista"};
    if(find(permitidos.begin(),permitidos.end(),tipo) == permitidos.end()){
        throw invalid_argument("Tipo " + tipo + " invalido");
    }        
}

void Tipo::setTipo(string tipo){
    validar(tipo);
    this->tipo = tipo;
}

string Tipo::getTipo() const{
    return tipo;
}
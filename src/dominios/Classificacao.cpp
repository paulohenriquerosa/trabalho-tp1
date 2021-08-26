/// @author: Paulo Henrique Rosa 17/0163687


#include "../../headers/dominios/Classificacao.h"


void Classificacao::validar(string classificacao){
  array<string, 6> valid_arguments ={
    "livre",
    "10",
    "12",
    "14",
    "16",
    "18"
  };

  if(find(valid_arguments.begin(), valid_arguments.end(), classificacao) == valid_arguments.end()){
    throw invalid_argument("Argumento invalido");
  }

}

void Classificacao::setClassificacao(string classificacao){
  validar(classificacao);
  this->classificacao = classificacao;
}



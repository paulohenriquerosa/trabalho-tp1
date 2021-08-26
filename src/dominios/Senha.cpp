#include <iostream>
#include <sstream>
#include <vector>

#include "../../headers/dominios/Senha.h"

using namespace std;

void Senha::validar(string senha) {

  if (senha.length() < 8  ){
    throw invalid_argument("Argumento invalido");
  }

  vector<string> caracteres_permitidos = {
    "!",
    "@",
    "#",
    "$",
    "%",
    "&",
    "?",
  };

  for ( auto i : senha ){

    if(find(caracteres_permitidos.begin(), caracteres_permitidos.end(), i) == caracteres_permitidos.end()){
      throw invalid_argument("Argumento invalido");
    }

    int repets = std::count(senha.begin(), senha.end(), i);

    if (repets > 1){
      throw invalid_argument("Argumento invalido");
    };

  };

  if (not (std::count_if(senha.begin(), senha.end(), [](unsigned char ch) { return std::isalpha(ch); }) == 1)) {
    throw invalid_argument("Argumento invalido");
  };

  if (not (std::count_if(senha.begin(), senha.end(), [](unsigned char ch) { return std::isdigit(ch); }) == 1)) {
    throw invalid_argument("Argumento invalido");
  };

};



void Senha::setSenha(string senha){
  validar(senha);
  this->senha = senha;
}
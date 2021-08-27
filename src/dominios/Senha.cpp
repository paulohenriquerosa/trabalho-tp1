/// @author: Paulo Henrique Rosa 17/0163687

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

#include "../../headers/dominios/Senha.h"

using namespace std;

void Senha::validar(string senha) {

  if (senha.length() < 8  ){
    throw invalid_argument("Argumento invalido");
  }

  array<string, 7> caracteres_permitidos = {
    "!",
    "@",
    "#",
    "$",
    "%",
    "&",
    "?",
  };

  if (not (std::count_if(senha.begin(), senha.end(), [](unsigned char ch) { return isalpha(ch); }) != 1)) {
    
    throw invalid_argument("Argumento invalido");
  };

  if (not (std::count_if(senha.begin(), senha.end(), [](unsigned char ch) { return isdigit(ch); }) != 1)) {
    
    throw invalid_argument("Argumento invalido");
  };

  for (auto i : senha ){
    string s;
    s = i;
    int repets = count(senha.begin(), senha.end(), i);

    if (repets > 1){
      throw invalid_argument("Argumento invalido");
    };

    if (not isalpha(i) and not isdigit(i)){
      if(find(caracteres_permitidos.begin(), caracteres_permitidos.end(), s) == caracteres_permitidos.end()){
        throw invalid_argument("Argumento invalido");
      }
    }
  };

};


/// \brief Armazena a senha do participante recebido no atributo do objeto da classe Senha
/// @param string senha
void Senha::setSenha(string senha){
  validar(senha);
  this->senha = senha;
}
#include <iostream>
#include <sstream>
#include <vector>

#include "../../headers/dominios/Email.h"

using namespace std;

vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}


void Email::validar(string email){
  
  string parte_local, dominio;
  vector<string> email_vector = split(email, '@');
  parte_local = email[0];
  dominio = email[1];

  array<string, 19> caracteres_permitidos = {
    "!" ,
    "#" ,
    "$" ,
    "%" ,
    "&" ,
    "'" ,
    "*" ,
    "+" ,
    "-" ,
    "/" ,
    "=" ,
    "?",
    "^",
    "_" ,
    "`",
    "{",
    "|",
    "}",
    "~",
  };

  if (parte_local.length() > 64) {
    throw invalid_argument("Argumento invalido");
  }

  if (parte_local.length() > 255) {
    throw invalid_argument("Argumento invalido");
  }

  if (email.front() == '.' or email.back() == '.'){
    throw invalid_argument("Argumento invalido");
  }

  int index = email.find_first_of('.');

  if (email[index] == email[index+1]){
    throw invalid_argument("Argumento invalido");
  }

  for (auto i: email ){
    string s;
    s = i;
    if(find(caracteres_permitidos.begin(), caracteres_permitidos.end(), s) == caracteres_permitidos.end()){
      throw invalid_argument("Argumento invalido");
    };
  }

};


void Email::setEmal(string email){
  validar(email);
  this->email = email;
}
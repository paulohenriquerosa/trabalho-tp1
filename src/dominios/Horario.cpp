/// @author: Paulo Henrique Rosa 17/0163687

#include <iostream>
#include <sstream>
#include <vector>

#include "../../headers/dominios/Horario.h"

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


void Horario::validar(string horario){

  vector<string> horario_formatado = split(horario, ':');

  vector<string> minutos = {
    "00",
    "15",
    "30",
    "45",
  };

  int hora = std::stoi(horario_formatado[0]);

  if (not (hora>= 0) and not (hora <= 23)){
    throw invalid_argument("Argumento invalido");
  }

  if(find(minutos.begin(), minutos.end(), horario_formatado[1]) == minutos.end()){
    throw invalid_argument("Argumento invalido");
  }

};

void Horario::setHorario(string horario){
  validar(horario);
  this->horario = horario;
};

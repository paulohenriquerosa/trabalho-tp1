/// @author: Paulo Henrique Rosa 17/0163687

#ifndef CLASSIFICACAO_H
#define CLASSIFICACAO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe responsável pela classificação da entidade Peça

class Classificacao {
  private:
    string classificacao;
    void validar(string);

  public: 
    string getClassificacao() const;
    void setClassificacao(string);
};


inline string Classificacao::getClassificacao() const {
  return classificacao;
};

#endif // CLASSIFICACAO_H
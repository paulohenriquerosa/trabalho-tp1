#ifndef PECA_H
#define PECA_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "Codigo.h"
#include "Tipo.h"

using namespace std;

class Peca {
    private:
        Codigo* identificador;
        string nome;
        Tipo* tipo;
        string classificacao;
    
    //completar com os metodos e outros dominios

};

#endif //PECA_H
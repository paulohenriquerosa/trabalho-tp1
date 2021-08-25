#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "Matricula.h"

using namespace std;

class Participante {
    private:
        Matricula* matricula;
        string nome;
        string sobrenome;
        string email;
        string telefone;
        string senha;
        string cargo;
    
    // Definir os métodos set e get, além dos outros de requisitos funcionais
    // Incluir outros dominios que estejam faltando
    
};

#endif //PARTICIPANTE_H
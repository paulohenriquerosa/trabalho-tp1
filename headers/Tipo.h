/* Autora: Maria Claudia Campos Martins 17/0109968 */

#ifndef TIPO
#define TIPO

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

// Tipo 
class Tipo {
    private:
        string tipo;
        void validar(string);
    public:
        void setTipo(string);
        string getTipo() const;
};

#endif //TIPO
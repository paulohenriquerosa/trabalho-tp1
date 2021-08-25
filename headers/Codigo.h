/* Autora: Maria Claudia Campos Martins 17/0109968 */

#ifndef CODIGO_H
#define CODIGO_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

class Codigo {
    /* Formato LLDDDD
        - cada L é letra maiúscula (A-Z)
        - cada D é dígito (0-9) */
    private:
        string codigo;
        void validar(string);
    public:
        void setCodigo(string);
        string getCodigo() const; 
};

#endif //CODIGO_H
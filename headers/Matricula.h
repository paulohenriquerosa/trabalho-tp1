/* Autora: Maria Claudia Campos Martins 17/0109968 */

#ifndef MATRICULA
#define MATRICULA

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

// Matricula
class Matricula {
    private: 
        string matricula;
        void validar(string);
    public:
        void setMatricula(string);
        string getMatricula() const;
};

#endif //MATRICULA
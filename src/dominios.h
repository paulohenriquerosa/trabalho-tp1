#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
using namespace std;

/* Dominio Codigo */
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

inline string Codigo::getCodigo() const{
    return codigo;
}


#endif 
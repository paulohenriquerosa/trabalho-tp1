/* Autora: Maria Claudia Campos Martins 17/0109968 */

#ifndef TUData_H
#define TUData_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "Data.h"

using namespace std;

class TUData {
    private:
        private:
        const string DATA_VALIDA = "17/12/2017";
        const string DATA_INVALIDA = "31/02/2016";
        Data* data;
        int estado;                             
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();              

    public:
        const static int SUCESSO =  0;          
        const static int FALHA   = -1;          
        int run(); 
};

#endif //TUData_H
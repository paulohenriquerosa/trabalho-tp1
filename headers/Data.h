#ifndef DATA
#define DATA

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;


// Data
class Data {
    /* Formato DD/MM/AAAA
    - 01 a 31  em DD. 01 e 12  em MM. 
    - 2000 a 9999  em AAAA. 
    - Data considera a ocorrência de anos bissextos */
    private:
        string data; 
        void validar(string);
    public:
        void setData(string);
        string getData() const;
}; 

#endif // DATA
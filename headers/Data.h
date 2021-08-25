/// @author: Maria Claudia Campos Martins 17/0109968

#ifndef DATA_H
#define DATA_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

/// \brief Classe responsável por armazenar uma data no formato
/// DD/MM/AAAA, em que DD são os dias, MM, os meses e AAAA, o ano.
class Data
{
private:
    string data;
    void validar(string);

public:
    void setData(string);
    string getData() const;
};

#endif // DATA_H
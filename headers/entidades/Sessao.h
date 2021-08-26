#ifndef SESSAO_H
#define SESSAO_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "../dominios/Codigo.h"
#include "../dominios/Data.h"
#include "../dominios/Horario.h"

using namespace std;

/// \brief Classe que caracteriza uma sessão do espetáculo.
class Sessao
{
private:
    Codigo identificador;
    Data data;
    Horario horario;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setData(const Data &);
    Data getData() const;
    void setHorario(const Horario &);
    Horario getHorario() const;
};

#endif //SESSAO_H
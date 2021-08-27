/// @author: Maria Claudia Campos Martins 17/0109968

#ifndef SALA_H
#define SALA_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "../dominios/Codigo.h"
#include "../dominios/Nome.h"
#include "../dominios/Capacidade.h"

using namespace std;

/// \brief Classe relativa às salas de espetáculos.
class Sala
{
private:
    Codigo identificador;
    Nome nome;
    Capacidade capacidade;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setNome(const Nome &);
    Nome getNome() const;
    void setCapacidade(const Capacidade &);
    Capacidade getCapacidade() const;
};

#endif //SALA_H
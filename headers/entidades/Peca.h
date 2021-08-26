#ifndef PECA_H
#define PECA_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "../dominios/Codigo.h"
#include "../dominios/Tipo.h"
#include "../dominios/Nome.h"
#include "../dominios/Classificacao.h"

using namespace std;

/// \brief Classe que designa uma peça de espetáculo.
class Peca
{
private:
    Codigo identificador;
    Nome nome;
    Tipo tipo;
    Classificacao classificacao;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setTipo(const Tipo &);
    Tipo getTipo() const;
    void setNome(const Nome &);
    Nome getNome() const;
    void setClassificacao(const Classificacao &);
    Classificacao getClassificacao() const;
};

#endif //PECA_H
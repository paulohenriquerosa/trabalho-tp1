#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H

#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "../dominios/Matricula.h"
#include "../dominios/Nome.h"
#include "../dominios/Email.h"
#include "../dominios/Telefone.h"
#include "../dominios/Senha.h"
#include "../dominios/Cargo.h"

using namespace std;

/// \brief Classe relativa a dados do participante da peça
class Participante
{
private:
    Matricula matricula;
    Nome nome;
    //Nome sobrenome;
    Email email;
    Telefone telefone;
    Senha senha;
    Cargo cargo;

public:
    void setMatricula(const Matricula &);
    Matricula getMatricula() const;
    void setNome(const Nome &);
    Nome getNome() const;
    //void setSobrenome(const Nome &);
    //Nome getSobrenome() const;
    void setEmail(const Email &);
    Email getEmail() const;
    void setTelefone(const Telefone &);
    Telefone getTelefone() const;
    void setSenha(const Senha &);
    Senha getSenha() const;
    void setCargo(const Cargo &);
    Cargo getCargo() const;
};

#endif //PARTICIPANTE_H

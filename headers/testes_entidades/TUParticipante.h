/// @author: Paulo Henrique Rosa 17/0163687

#ifndef TUPARTICIPANTE_H
#define TUPARTICIPANTE_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "../entidades/Participante.h"

using namespace std;

/// \brief Classe de teste de unidade da entidade Participante.
class TUParticipante
{
private:
<<<<<<< HEAD
    const string MATRICULA_VALIDO = "Paulo Henrique";
    const string NOME_VALIDO = "Paulo Henrique";
    const string SOBRENOME_VALIDO = "Paulo Henrique";
    const string EMAIL_VALIDO = "Paulo Henrique";
    const string TELEFONE_VALIDO = "Paulo Henrique";
    const string SENHA_VALIDO = "Paulo Henrique";
    const string CARGO_VALIDO = "Paulo Henrique";
=======
    const  string MATRICULA_VALIDO   = "12345";
    const  string NOME_VALIDO   = "Paulo Henrique";
    const  string SOBRENOME_VALIDO   = "Paulo Henrique";
    const  string EMAIL_VALIDO   = "paulo@example.com";
    const  string TELEFONE_VALIDO   = "(11)-123456789";
    const  string SENHA_VALIDO   = "paulo@1810";
    const  string CARGO_VALIDO   = "ator";
>>>>>>> 5140d202bfa3c9abb18932b9b6000d147e367ac0
    Participante *participante;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

#endif // TUPARTICIPANTE_H
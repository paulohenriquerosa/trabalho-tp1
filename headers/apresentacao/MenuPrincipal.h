// @author: Maria Claudia Campos Martins 17/0109968

#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <stdio.h>
#include <iostream>

#include "../interfaces.h"
#include "../compatibilidade.h"
#include <string.h>

class MenuPrincipal
{
private:
    IApresentacaoAutenticacao *autenticacao_A;
    IApresentacaoParticipante *participante_A;
    IApresentacaoPeca *peca_A;
    IApresentacaoSala *sala_A;
    IApresentacaoSessao *sessao_A;

    void menuVisualizar();
    void menuEditar();
    void menuIncluir();
    void menuExcluir();

public:
    void VerAutenticacao(IApresentacaoAutenticacao *_autenticacao_A)
    {
        this->autenticacao_A = _autenticacao_A;
    }

    void VerParticipante(IApresentacaoParticipante *_participante_A)
    {
        this->participante_A = _participante_A;
    }

    void VerPeca(IApresentacaoPeca *_peca_A)
    {
        this->peca_A = _peca_A;
    }

    void VerSala(IApresentacaoSala *_sala_A)
    {
        this->sala_A = _sala_A;
    }

    void VerSessao(IApresentacaoSessao *_sessao_A)
    {
        this->sessao_A = _sessao_A;
    }

    void executar();
};

#endif // MENUPRINCIPAL_H

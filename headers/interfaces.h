/// @author: Bianca Glycia Boueri 17/0161561

#ifndef INTERFACES_H
#define INTERFACES_H

#include <stdexcept>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string.h>
#include <iostream>

#include "dominios/Matricula.h"
#include "dominios/Senha.h"
#include "dominios/Codigo.h"
#include "entidades/Participante.h"
#include "entidades/Sessao.h"
#include "entidades/Sala.h"
#include "entidades/Peca.h"

using namespace std;

/// \brief Declaração das interfaces:

//////////// Declaração adiantada

class IServicoAutenticacao;
class IServicoParticipante;
class IServicoPeca;
class IServicoSala;
class IServicoSessao;

//////////// Interfaces camada apresentação

class IApresentacaoAutenticacao
{ // IAC-AA

public:
  virtual bool autenticar(Matricula *) = 0;
  virtual void setCntrServicoAutenticacao(IServicoAutenticacao *) = 0;
  virtual ~IApresentacaoAutenticacao() {}
};

class IApresentacaoParticipante
{ // IAC-AP

public:
  virtual void executar(Matricula *) = 0;
  virtual void cadastrar() = 0;
  virtual void setCntrServicoParticipante(IServicoParticipante *) = 0;
  virtual ~IApresentacaoParticipante() {}
};

class IApresentacaoPeca
{ // IAC-APE

public:
  virtual void executar(Matricula *) = 0; // Usuário logado
  virtual void executar() = 0;            // Opções de listagem, usuário não logado
  virtual void setCntrServicoPeca(IServicoPeca *) = 0;
  virtual ~IApresentacaoPeca() {}
};

class IApresentacaoSala
{ // IAC-ASA

public:
  virtual void executar(Matricula *) = 0; // Usuário logado
  virtual void executar() = 0;            // Opções de listagem, usuário não logado
  virtual void setCntrServicoSala(IServicoSala *) = 0;
  virtual ~IApresentacaoSala() {}
};

class IApresentacaoSessao
{ // IAC-ASE

public:
  virtual void executar(Matricula *) = 0; // Usuário logado
  virtual void executar() = 0;            // Opções de listagem, usuário não logado
  virtual void setCntrServicoSessao(IServicoSessao *) = 0;
  virtual ~IApresentacaoSessao() {}
};

//////////// Interfaces camada de serviço

class IServicoAutenticacao
{ // IAA-SA

public:
  virtual bool autenticar(const Matricula &, const Senha &) = 0;
  virtual ~IServicoAutenticacao() {}
};

class IServicoParticipante
{ // IAP-SP

public:
  virtual bool cadastrar(Participante) = 0;
  virtual bool editar(Participante) = 0;
  virtual bool excluir(Matricula) = 0;
  virtual ~IServicoParticipante() {}
};

class IServicoPeca
{ // IAPE-SPE

public:
  // Usuário não autenticado
  virtual void listar() = 0;

  // Usuário autenticado
  virtual bool incluir(Peca) = 0;
  virtual bool excluir(Codigo) = 0;
  virtual bool editar(Peca) = 0;
  virtual bool visualizar(Codigo) = 0;

  virtual ~IServicoPeca() {}
};

class IServicoSala
{ // IASA-SSA

public:
  // Usuário não autenticado
  virtual void listar() = 0;

  // Usuário autenticado
  virtual bool incluir(Sala) = 0;
  virtual bool excluir(Codigo) = 0;
  virtual bool editar(Sala) = 0;
  virtual bool visualizar(Codigo) = 0;

  virtual ~IServicoSala() {}
};

class IServicoSessao
{ // IASE-SSE

public:
  // Usuário não autenticado
  virtual void listar() = 0;

  // Usuário autenticado
  virtual bool incluir(Sessao) = 0;
  virtual bool excluir(Codigo) = 0;
  virtual bool editar(Sessao) = 0;
  virtual bool visualizar(Codigo) = 0;

  virtual ~IServicoSessao() {}
};

#endif // INTERFACES_H

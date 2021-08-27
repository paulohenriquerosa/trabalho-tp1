
//Dominios
#include "../headers/dominios/Capacidade.h"
#include "../headers/dominios/Cargo.h"
#include "../headers/dominios/Classificacao.h"
#include "../headers/dominios/Codigo.h"
#include "../headers/dominios/Data.h"
#include "../headers/dominios/Email.h"
#include "../headers/dominios/Horario.h"
#include "../headers/dominios/Matricula.h"
#include "../headers/dominios/Nome.h"
#include "../headers/dominios/Senha.h"
#include "../headers/dominios/Telefone.h"
#include "../headers/dominios/Tipo.h"

//Entidades
#include "../headers/entidades/Participante.h"
#include "../headers/entidades/Peca.h"
#include "../headers/entidades/Sala.h"
#include "../headers/entidades/Sessao.h"

//Testes de unidades dos dominios
#include "../headers/testes_dominios/TUCapacidade.h"
#include "../headers/testes_dominios/TUCargo.h"
#include "../headers/testes_dominios/TUClassificacao.h"
#include "../headers/testes_dominios/TUCodigo.h"
#include "../headers/testes_dominios/TUData.h"
#include "../headers/testes_dominios/TUEmail.h"
#include "../headers/testes_dominios/TUHorario.h"
#include "../headers/testes_dominios/TUMatricula.h"
#include "../headers/testes_dominios/TUNome.h"
#include "../headers/testes_dominios/TUSenha.h"
#include "../headers/testes_dominios/TUTelefone.h"
#include "../headers/testes_dominios/TUTipo.h"

//Testes de unidades das entidades
#include "../headers/testes_entidades/TUParticipante.h"
#include "../headers/testes_entidades/TUPeca.h"
#include "../headers/testes_entidades/TUSala.h"
#include "../headers/testes_entidades/TUSessao.h"

int main()
{
    //Testes de classe dominio:

    TUCapacidade testeA;
    switch (testeA.run())
    {
    case TUCapacidade::SUCESSO:
        cout << "SUCESSO - Capacidade" << endl;
        break;
    case TUCapacidade::FALHA:
        cout << "FALHA - Capacidade" << endl;
        break;
    }

    TUCargo testeB;
    switch (testeB.run())
    {
    case TUCargo::SUCESSO:
        cout << "SUCESSO - Cargo" << endl;
        break;
    case TUCargo::FALHA:
        cout << "FALHA - Cargo" << endl;
        break;
    }

    TUClassificacao testeC;
    switch (testeC.run())
    {
    case TUClassificacao::SUCESSO:
        cout << "SUCESSO - Classificacao" << endl;
        break;
    case TUClassificacao::FALHA:
        cout << "FALHA - Classificacao" << endl;
        break;
    }

    TUCodigo testeD;
    switch (testeD.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - Codigo" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA - Codigo" << endl;
        break;
    }

    TUData testeE;
    switch (testeE.run())
    {
    case TUData::SUCESSO:
        cout << "SUCESSO - Data" << endl;
        break;
    case TUData::FALHA:
        cout << "FALHA - Data" << endl;
        break;
    }

    TUEmail testeF;
    switch (testeF.run())
    {
    case TUEmail::SUCESSO:
        cout << "SUCESSO - Email" << endl;
        break;
    case TUEmail::FALHA:
        cout << "FALHA - Email" << endl;
        break;
    }

    TUHorario testeG;
    switch (testeG.run())
    {
    case TUHorario::SUCESSO:
        cout << "SUCESSO - Horario" << endl;
        break;
    case TUHorario::FALHA:
        cout << "FALHA - Horario" << endl;
        break;
    }

    TUMatricula testeH;
    switch (testeH.run())
    {
    case TUMatricula::SUCESSO:
        cout << "SUCESSO - Matricula" << endl;
        break;
    case TUMatricula::FALHA:
        cout << "FALHA - Matricula" << endl;
        break;
    }

    TUNome testeI;
    switch (testeI.run())
    {
    case TUNome::SUCESSO:
        cout << "SUCESSO - Nome" << endl;
        break;
    case TUNome::FALHA:
        cout << "FALHA - Nome" << endl;
        break;
    }

    TUSenha testeJ;
    switch (testeJ.run())
    {
    case TUSenha::SUCESSO:
        cout << "SUCESSO - Senha" << endl;
        break;
    case TUSenha::FALHA:
        cout << "FALHA - Senha" << endl;
        break;
    }

    TUTelefone testeK;
    switch (testeK.run())
    {
    case TUTelefone::SUCESSO:
        cout << "SUCESSO - Telefone" << endl;
        break;
    case TUTelefone::FALHA:
        cout << "FALHA - Telefone" << endl;
        break;
    }

    TUTipo testeL;
    switch (testeL.run())
    {
    case TUTipo::SUCESSO:
        cout << "SUCESSO - Tipo" << endl;
        break;
    case TUTipo::FALHA:
        cout << "FALHA - Tipo" << endl;
        break;
    }

    //Testes de classe entidade:

    TUParticipante testeM;
    switch (testeM.run())
    {
    case TUParticipante::SUCESSO:
        cout << "SUCESSO - Participante" << endl;
        break;
    case TUParticipante::FALHA:
        cout << "FALHA - Participante" << endl;
        break;
    }

    TUPeca testeN;
    switch (testeN.run())
    {
    case TUPeca::SUCESSO:
        cout << "SUCESSO - Peca" << endl;
        break;
    case TUPeca::FALHA:
        cout << "FALHA - Peca" << endl;
        break;
    }

    TUSala testeO;
    switch (testeO.run())
    {
    case TUSala::SUCESSO:
        cout << "SUCESSO - Sala" << endl;
        break;
    case TUSala::FALHA:
        cout << "FALHA - Sala" << endl;
        break;
    }

    TUSessao testeP;
    switch (testeP.run())
    {
    case TUSessao::SUCESSO:
        cout << "SUCESSO - Sessao" << endl;
        break;
    case TUSessao::FALHA:
        cout << "FALHA - Sessao" << endl;
        break;
    }

    return 0;
}

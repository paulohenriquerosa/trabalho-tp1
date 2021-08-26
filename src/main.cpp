
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

//Testes de unidades dos dominios
#include "../headers/testes_dominios/TUCapacidade.h"
#include "../headers/testes_dominios/TUCodigo.h"
#include "../headers/testes_dominios/TUMatricula.h"
#include "../headers/testes_dominios/TUTipo.h"
#include "../headers/testes_dominios/TUData.h"
#include "../headers/testes_dominios/TUClassificacao.h"
#include "../headers/testes_dominios/TUEmail.h"
#include "../headers/testes_dominios/TUHorario.h"
#include "../headers/testes_dominios/TUSenha.h"

int main()
{
    Telefone A;

    try
    {
        A.setTelefone("(38)-000090090");
    }
    catch (...)
    {
        cout << "falhou" << endl;
        return 0;
    }
    cout << "sucea" << endl;

    return 0;
}

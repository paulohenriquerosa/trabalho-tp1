
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

int main()
{

    cout << "OIIIIIIIIIIIIII" << endl;

    TUTipo teste;

    cout << teste.run() << endl;

    return 0;
}

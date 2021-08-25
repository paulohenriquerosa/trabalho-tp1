/// @author: Maria Claudia Campos Martins 17/0109968

#include "../headers/Matricula.h"

/*** 
 * Realiza a validação da string matrícula armazenada no objeto 
 * da classe Matricula. A validação é tal que o tamanho da string 
 * seja igual a 6 caracteres e todos eles sejam iguais a dígitos de
 * 0 a 9.
 * ***/
void Matricula::validar(string matricula)
{
    bool digitoInvalido = false;
    bool tamanhoInvalido = false;
    int tamanho = matricula.length();

    if (tamanho == 5)
    {
        for (int i = 1; i < tamanho; i++)
        {
            if (matricula[i] == matricula[i - 1])
            {
                digitoInvalido = true;
                break;
            }
            if (!(matricula[i] >= '0' && matricula[i] <= '9'))
            {
                digitoInvalido = true;
                break;
            }
        }
    }
    else
    {
        tamanhoInvalido = true;
    }

    if (digitoInvalido)
    {
        throw invalid_argument("Matricula " + matricula + " invalida");
    }
    if (tamanhoInvalido)
    {
        throw invalid_argument("Tamanho de matricula não permitido.");
    }
}

/// \brief Armazena a matrícula recebida no atributo de matricula do objeto
/// da classe Matricula
/// @param string matricula
void Matricula::setMatricula(string matricula)
{
    validar(matricula);
    this->matricula = matricula;
}

/// \brief Retorna o valor do atributo matricula, armazenado no objeto da classe
/// Matricula
/// @return string matricula
string Matricula::getMatricula() const
{
    return matricula;
}

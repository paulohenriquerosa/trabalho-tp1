/// @author: Maria Claudia Campos Martins 17/0109968

#include "../../headers/dominios/Codigo.h"

/*** Validação do código recebido, sendo que o código será válido quando for
 uma string de 6 caracteres sendo seus 2 primeiros caracteres letras maiúsculas
 de A a Z, e seus último, dígitos de 0 a 9. ***/
void Codigo::validar(string codigo)
{
    bool codigoInvalido = false;
    bool tamanhoInvalido = false;
    int tamanho = codigo.length();

    if (tamanho == 6)
    {
        for (int i = 0; i < 2; i++)
        {
            if ((codigo[i] < 'A' && codigo[i] > 'Z'))
            {
                codigoInvalido = true;
            }
        }
        for (int i = 2; i < tamanho; i++)
        {
            if (!(codigo[i] >= '0' && codigo[i] <= '9'))
            {
                codigoInvalido = true;
            }
        }
    }
    else
    {
        tamanhoInvalido = true;
    }

    if (tamanhoInvalido)
    {
        throw invalid_argument("Tamanho de código inválido.");
    }
    if (codigoInvalido)
    {
        throw invalid_argument("Código " + codigo + " invalido.");
    }
}

/// \brief Método responsável por atribuir a string recebida de código
/// ao atributo codigo do objeto da classe Código.
/// @param string codigo
void Codigo::setCodigo(string codigo)
{
    validar(codigo);
    this->codigo = codigo;
}

/// \brief Método responsável por retornar o valor do atributo codigo do objeto
/// da classe Código.
/// @return string codigo
string Codigo::getCodigo() const
{
    return codigo;
};
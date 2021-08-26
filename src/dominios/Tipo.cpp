/// @author: Maria Claudia Campos Martins 17/0109968

#include "../../headers/dominios/Tipo.h"

/*** 
 * A validação do tipo se dá pela verificação se o tipo da peça é
 * auto, comédia, drama, farsa, melodrama, monólogo, musical, ópera,
 * ou revista. Sendo uma verificação sensível a letras e acentos. 
 * ***/
void Tipo::validar(string tipo)
{
    array<string, 9> permitidos = {"auto",
                                   "comédia",
                                   "drama",
                                   "farsa",
                                   "melodrama",
                                   "monólogo",
                                   "musical",
                                   "ópera",
                                   "revista"};
    if (find(permitidos.begin(), permitidos.end(), tipo) == permitidos.end())
    {
        throw invalid_argument("Tipo " + tipo + " invalido");
    }
}

/// \brief Armazena o tipo da peça recebido no atributo do objeto da classe Tipo
/// @param string tipo
void Tipo::setTipo(string tipo)
{
    validar(tipo);
    this->tipo = tipo;
}

/// \brief Retorna o tipo da peça armazenada no objeto da classe Tipo
/// @return string tipo
string Tipo::getTipo() const
{
    return tipo;
}
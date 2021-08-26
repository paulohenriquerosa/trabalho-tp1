/// @author: Bianca Glycia Boueri 17/0161561

#include "../../headers/dominios/Nome.h"

/*** 
 * A validação do tipo se dá pela verificação se o tipo da peça é
 * auto, comédia, drama, farsa, melodrama, monólogo, musical, ópera,
 * ou revista. Sendo uma verificação sensível a letras e acentos. 
 * ***/
void Nome::validar(string nome)
{

  if (nome.length() < 5 || nome.length() > 20)
  {
    throw invalid_argument("Nome " + nome + " invalido");
  }

  else if (not isupper(nome[0]))
  {
    throw invalid_argument("Nome " + nome + " invalido");
  }

  for (int i = 0; i < nome.length(); i++)
  {
    if (not isalpha(nome[i]) && nome[i] != '.' && nome[i] != ' ')
    {
      throw invalid_argument("Nome " + nome + " invalido");
    }

    else if (nome[i] == '.')
    {

      if (not isalpha(nome[i - 1]))
      {
        throw invalid_argument("Nome " + nome + " invalido");
      }
    }

    else if (nome[i] == ' ')
    {
      if (nome[i + 1] == ' ')
      {
        throw invalid_argument("Nome " + nome + " invalido");
      }

      if (not isupper(nome[i + 1]))
      {
        throw invalid_argument("Nome " + nome + " invalido");
      }
    }
  }
}

/// \brief Armazena o tipo da peça recebido no atributo do objeto da classe Tipo
/// @param string tipo
void Nome::setNome(string nome)
{
  validar(nome);
  this->nome = nome;
}

/// \brief Retorna o tipo da peça armazenada no objeto da classe Tipo
/// @return string tipo
string Nome::getNome() const
{
  return nome;
}
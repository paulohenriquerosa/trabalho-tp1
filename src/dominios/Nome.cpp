/// @author: Bianca Glycia Boueri 17/0161561

#include "../../headers/dominios/Nome.h"

/*** 
 * A validação se dá pela verificação se o nome possui de 5 a 20 caracteres, 
 * se cada caractere é uma letra, ponto ou espaco em branco, se todo ponto é 
 * precedido por letra, se nao ha espaços em branco em sequencia e se a primeira 
 * letra de cada termo é maiuscula.
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

/// \brief Armazena o nome do Participante, da Peca e da Sala recebidos nos
///atributos dos objetos da classe Nome.
/// @param string nome
void Nome::setNome(string nome)
{
  validar(nome);
  this->nome = nome;
}

/// \brief Retorna os nomes das entidades armazenados nos objetos da classe Nome.
/// @return string nome
string Nome::getNome() const
{
  return nome;
}
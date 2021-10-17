// Maria Claudia Campos Martins

#include "../../headers/apresentacao/MenuPrincipal.h"

void MenuPrincipal::executar()
{
    bool executando = true;
    bool entradaInvalida = false;
    bool autenticado = false;
    char entrada;
    string codigo;

    while (executando)
    {
        CLEAR
        if (entradaInvalida)
        {
            std::cout << "Entrada não reconhecida. Insira uma opção válida.\n";
            entradaInvalida = false;
        }

        if (autenticado)
        {
            std::cout << "Escolha um serviço:\n"
                         "1. Peça\n"
                         "2. Participante\n"
                         "3. Sala\n"
                         "4. Sessão\n"
                         "5. Sair\n";
        }
        else
        {
            std::cout << "Escolha um serviço:\n"
                         "1. Autenticar\n"
                         "2. Cadastrar\n"
                         "3. Listar Peças\n"
                         "4. Listar Salas\n"
                         "5. Listar Sessões\n"
                         "6. Sair\n";
        }

        entrada = getch();

        if (autenticado)
        {
            switch (entrada)
            {
            case '1':
                this->menuVisualizar();
                break;
            case '2':
                this->menuEditar();
                break;
            case '3':
                this->menuIncluir();
                break;
            case '4':
                this->menuExcluir();
                break;
            case '5':
                executando = false;
                break;
            case '\n':
                break;

            default:
                entradaInvalida = true;
                break;
            }
        }
        else
        {
            switch (entrada)
            {
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '6':
                executando = false;
                break;
            case '\n':
                break;

            default:
                entradaInvalida = true;
                break;
            }
        }
    }
}

void MenuPrincipal::menuVisualizar()
{
    bool executando = true;
    bool entradaInvalida = false;
    bool autenticado = false;
    char entrada;
    string codigo;

    while (executando)
    {
        CLEAR
        if (entradaInvalida)
        {
            std::cout << "Entrada não reconhecida. Insira uma opção válida.\n";
            entradaInvalida = false;
        }

        std::cout << "O que você deseja visualizar?\n"
                     "1. Peça\n"
                     "2. Sessão\n"
                     "3. Sala\n"
                     "4. Voltar\n";

        entrada = getch();

        switch (entrada)
        {
        case '1':
            break;
        case '2':

            break;
        case '3':

            break;
        case '4':

            break;
        case '\n':
            break;

        default:
            break;
        }
    }
}

void MenuPrincipal::menuEditar()
{
    bool executando = true;
    bool entradaInvalida = false;
    bool autenticado = false;
    char entrada;
    string codigo;

    while (executando)
    {
        CLEAR
        if (entradaInvalida)
        {
            std::cout << "Entrada não reconhecida. Insira uma opção válida.\n";
            entradaInvalida = false;
        }

        std::cout << "O que você deseja editar?\n"
                     "1. Peça\n"
                     "2. Sessão\n"
                     "3. Sala\n"
                     "4. Participante\n"
                     "5. Sair\n";

        entrada = getch();

        switch (entrada)
        {
        case '1':
            break;
        case '2':

            break;
        case '3':

            break;
        case '4':

            break;

        case '5':

            break;
        case '\n':
            break;

        default:
            break;
        }
    }
}

void MenuPrincipal::menuIncluir()
{
    bool executando = true;
    bool entradaInvalida = false;
    bool autenticado = false;
    char entrada;
    string codigo;

    while (executando)
    {
        CLEAR
        if (entradaInvalida)
        {
            std::cout << "Entrada não reconhecida. Insira uma opção válida.\n";
            entradaInvalida = false;
        }

        std::cout << "O que você deseja incluir?\n"
                     "1. Peça\n"
                     "2. Sessão\n"
                     "3. Sala\n"
                     "4. Sair\n";

        entrada = getch();

        switch (entrada)
        {
        case '1':
            break;
        case '2':

            break;
        case '3':

            break;
        case '4':

            break;
        case '\n':
            break;

        default:
            break;
        }
    }
}

void MenuPrincipal::menuExcluir()
{
    bool executando = true;
    bool entradaInvalida = false;
    bool autenticado = false;
    char entrada;
    string codigo;

    while (executando)
    {
        CLEAR
        if (entradaInvalida)
        {
            std::cout << "Entrada não reconhecida. Insira uma opção válida.\n";
            entradaInvalida = false;
        }

        std::cout << "O que você deseja excluir?\n"
                     "1. Peça\n"
                     "2. Sessão\n"
                     "3. Sala\n"
                     "4. Participante\n"
                     "5. Sair\n";

        entrada = getch();

        switch (entrada)
        {
        case '1':
            break;
        case '2':

            break;
        case '3':

            break;
        case '4':

            break;
        case '5':

            break;
        case '\n':
            break;

        default:
            break;
        }
    }
}

// Maria Claudia Campos Martins 170109968

#ifndef COMPATIBILIDADE_H
#define COMPATIBILIDADE_H

#if _WIN32

#include <conio.h>
#define CLEAR system("cls");

#else

#include <cstdio>
#define getch getchar

#define CLEAR system("clear");

#endif

#endif // COMPATIBILIDADE_H
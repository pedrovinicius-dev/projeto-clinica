#include "Sistema.h"
#include <locale.h>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
    srand(time(0));
    SetConsoleOutputCP(CP_UTF8); //ambas as linhas sao para usar o UTF-8
    SetConsoleCP(CP_UTF8);
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    IniciarClinicaEAJ();
}

//Ainda falta >
//> Persistência de Arquivos
//> Algoritmos de Ordenação, Busca e Recursividade
    
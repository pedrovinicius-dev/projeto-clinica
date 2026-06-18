#include "Sistema.h"
#include <locale.h>
#include <windows.h>
#include "Sistema.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8); //ambas as linhas sao para usar o UTF-8
    SetConsoleCP(CP_UTF8);
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    IniciarClinicaEAJ();
}


    
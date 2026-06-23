#include "Sistema.h"
#include <locale.h>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
    srand(time(0));
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    IniciarClinicaEAJ();
}

//Ainda falta >
//> Persistência de Arquivos
//> Algoritmos de Ordenação, Busca e Recursividade
    
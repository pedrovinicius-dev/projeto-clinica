#include <windows.h>
#include "Sistema.h"
#include <locale.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));

    setlocale(LC_ALL, "pt_BR.UTF-8");
    IniciarClinicaEAJ();
}

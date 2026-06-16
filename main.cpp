#include <iostream>
#include <locale.h>
#include "paciente.h"
using namespace std;

void Iniciar_programa();
int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    Iniciar_programa();
}

void Iniciar_programa()
{
    int opcao;
    int N=1;
    for(int i=0;i<N;i++){
        cout << "\n===========================================\n\tCLINICA EAJ\n===========================================\n\n1 - Cadastrar Paciente\n2 - Chamar Próximo paciente\n3 - Visualizar fila\n4 - Pesquisar paciente\n5 - Listar pacientes\n6 - Relátorio por médico\n7 - Salvar dados\n8 - Carregar dados\n0 - Sair\n\nEscolha uma opcao: ";
        cin >> opcao;
        switch (opcao)
    {
    case 1:
        principal();
        //cadastro de paciente
        break;
    case 2:
        break;
    default:
        cout << "\nOpção invalida! Digite novamente...\n";
        N++;
        continue;
    }
    }
    }
    
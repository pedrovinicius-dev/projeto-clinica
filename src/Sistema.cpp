#include "Sistema.h"
#include "Paciente.h"
#include "Fila.h"
using namespace std;

vector<Paciente> FilaEspera;

void IniciarClinicaEAJ() //função para iniciar o projeto na main
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); //Usar acentuação

    int opcao;

    do
    {
        cout << "\n==============================\n\tCLÍNICA EAJ\n==============================\n\n1 - Cadastrar paciente\n2 - Chamar próximo paciente\n3 - Visualizar fila\n4 - Pesquisar paciente\n5 - Listar pacientes\n6 - Relatório por médico\n7 - Salvar dados\n8 - Carregar dados\n0 - Sair\n\nEscolha uma opção: > ";

        cin >> opcao;

        switch (opcao)
        {
        case 1:
            CadastrarPaciente();
            break;
        case 2:
            //Chamar proximo paciente
            break;
        case 3:
            VisualizarFila();
            break;
        case 4:
            //Pesquisar paciente
            break;
        case 5:
            //Listar pacientes
            break;
        case 6:
            //Relatorio por medico
            break;
        case 7:
            //Salvar dados
            break;
        case 8:
            //Carregar dados
            break;
        case 0:
            //Sair
            break;
        default:
            cout << "\nDigite uma opção valida!\nTente novamente...";
            break;
        }
    } while (opcao != 0);
        cout << "\n\nProjeto desenvolvido por: Andinho & Vini7";
    
}

void ChamarProximo()
{
    cout << "\n==============================\n\tPAINEL DE CHAMADA\n==============================\n\n";
    if (FilaEspera.empty()) //Verifica se o vetor está vazio
    {
        cout << "Não há pacientes aguardando.\n";
        return; //Retorna para função de inicio
    }
    else
    {
        for (int i = 0; i < FilaEspera.size(); i++)
        {
            cout << "PACIENTE: " << FilaEspera[0].Nome << endl << endl;
            cout << "MÉDICO: " << FilaEspera[0].OpcaoMedico << endl << endl;
        }
        
    }
}
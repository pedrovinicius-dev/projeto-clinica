#include "Sistema.h"
#include "Medico.h"
#include "Paciente.h"
#include "Fila.h"
using namespace std;

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
            ChamarProximo();
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
        cout << "PACIENTE: " << FilaEspera[0].Nome << endl << endl;
        cout << "MEDICO: " << NomeMedico(FilaEspera[0].OpcaoMedico) << endl << endl;
        cout << "SALA: " << NumeroSala(FilaEspera[0].OpcaoMedico);
        FilaEspera.erase(FilaEspera.begin()); //Aqui foi papo de ficar calvo com o stress q passei...obs: anderson aqui
        //ex: Paciente -> OpcaoMedico -> 3
        //              -> NomeMedico(3) "Pediatra"
    }   //              -> NumeroSala(3) 103
}
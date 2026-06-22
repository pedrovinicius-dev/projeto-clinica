#include "Sistema.h"
#include "Paciente.h"
#include "Fila.h"
#include "busca.h"
using namespace std;

void IniciarClinicaEAJ() //função para iniciar o projeto na main
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); //Usar acentuação

    int opcao;
    bool sair = false; //O loop do menu depende dessa variavel q se inicia sendo false

    do
    {
        cout << "\n==============================\n\tCLÍNICA EAJ\n==============================\n\n1 - Cadastrar paciente\n2 - Chamar próximo paciente\n3 - Visualizar fila\n4 - Pesquisar paciente\n5 - Listar pacientes\n6 - Relatório por médico\n7 - Salvar dados\n8 - Carregar dados\n0 - Sair\n\nEscolha uma opção: > ";

        cin >> opcao;
        if (cin.fail()) { 
        cin.clear();  cin.ignore(10000, '\n'); // <-- AS DUAS LINHAS MILAGROSAS
        opcao =-1;
        }
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
            BuscarPaciente();
            break;
        case 5:
            ListarPacientes();
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
            char confirmação;
            cout << "\nTem certeza que deseja sair? (s/n): ";
            cin >> confirmação;
            if (confirmação == 'S' || confirmação == 's') //se o usuario digitar sim a variavel e true 
            {
                sair = true;
            }
            else
            {
                cout << "Operação cancelada.\n";
                break;
            }
            break;
        default:
            cout << "\nDigite uma opção valida!\nTente novamente...";
            break;
        }
    } while (!sair); //e sendo true vai encerrar o loop
        cout << "Encerrando o sistema...\nObrigado por utilizar a Clinica EAJ.\n\nProjeto desenvolvido por: Andinho & Vini7";
    
}
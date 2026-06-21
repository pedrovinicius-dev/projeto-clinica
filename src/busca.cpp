#include "Busca.h"
#include "medico.h"
#include "paciente.h"
using namespace std;


void BuscarPaciente()
{
    string BuscarNome;
    bool encontrado = false; //flag

    cout << "\n==============================\n\tBUSCAR PACIENTE\n==============================\n\n";
    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, BuscarNome);

    for (int i = 0; i < ListaGeral.size(); i++)
    {
        if (BuscarNome == ListaGeral[i].Nome) //Se o nome digitado acima, bate com algum nome dentro do vetor no indice.Nome
        {
            encontrado = true; //serve para lembrar quando o paciente for achado no loop
            cout << "\nPaciente encontrado!\n\n";
            cout << "Nome: " << ListaGeral[i].Nome << endl;
            cout << "Idade: " << ListaGeral[i].Idade << endl;
            cout << "Médico: " << NomeMedico(ListaGeral[i].OpcaoMedico) << endl;
            if (ListaGeral[i].Paciente_prioritario)
            {
                cout << "Prioridade: Sim" << endl;
            }
            else
            {
                cout << "Prioridade: Não" << endl;
            }
            break;
        }
    }
    if (encontrado == false)//Como eu iria saber se achei alguem se n tivesse a flag
    {
        cout << "\nPaciente não encontrado!\n";
    }
}
void ListarPacientes()
{
    cout << "\n==============================\n\tLISTA DE PACIENTES\n==============================\n\n";
    if (ListaGeral.empty()) //Verifica se a lista está vazia 
    {
        cout << "Não há pacientes cadastrado.\n";
        return; // SAi da função
    }
    else
    {
        for (int i = 0; i < ListaGeral.size(); i++)
        {
            cout << i + 1 << " - " << ListaGeral[i].Nome << endl;
            cout << "Idade: " << ListaGeral[i].Idade << endl;
            cout << "Especialidade: " << NomeMedico(ListaGeral[i].OpcaoMedico);
            cout << "\n\n";
        }
    }
    
}
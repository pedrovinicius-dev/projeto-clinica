#include "Fila.h"
#include <iostream>
#include "Medico.h"
using namespace std;

void VisualizarFila()//funçaõ do caso 3 que mostra a fila de espera atual
{
    cout << "\n==============================\n\tFILA DE ESPERA\n==============================\n\n";

    if (FilaEspera.empty()) //empty(), verifica se a vetor está vazio
    {
        cout << "Não há pacientes na fila de espera.\n";
    }
    else
    {
        for (int i = 0; i < FilaEspera.size(); i++) //.size mostra o conteudo do vetor, no caso a struct paciente
        {
            cout << i + 1 << " - " << FilaEspera[i].Nome << " | Idade: " << FilaEspera[i].Idade; //chamada pelos atributos .nome e .idade

            if (FilaEspera[i].Paciente_prioritario == true)
            {
                cout << " (Prioritário)\n";
            }
            cout << "\n==============================\n";
        }
    }
}

void ChamarProximo()//função do caso 2 que chama o proximo paciente para ser atendido
                    // e remove o da lista de espera
{
    cout << "\n==============================\n\tPAINEL DE CHAMADA\n==============================\n\n";
    if (FilaEspera.empty()) //Verifica se o vetor está vazio
    {
        cout << "Não há pacientes aguardando.\n";
        return; //Retorna para função de inicio
    }
    else
    {
        //fica armazenado no vetor filaespera, o nome do paciente, do medico e a sala,na posição 0 sera o proximo
        //a ser atendido

        cout << "PACIENTE: " << FilaEspera[0].Nome << endl << endl;//imprime o nome do paciente que esta sendo chamado
        cout << "MEDICO: " << NomeMedico(FilaEspera[0].OpcaoMedico) << endl << endl;//OpcaoMedico sera um inteiro que sera retornado a funcao NomeMedico,a qual contem um switch
        cout << "SALA: " << NumeroSala(FilaEspera[0].OpcaoMedico);//o mesmo acontece aqui, so muda a função
        FilaEspera.erase(FilaEspera.begin()); //Aqui foi papo de ficar calvo com o stress q passei...obs: anderson aqui
        //ex: Paciente -> OpcaoMedico -> 3
        //              -> NomeMedico(3) "Pediatra"
    }   //              -> NumeroSala(3) 103
}
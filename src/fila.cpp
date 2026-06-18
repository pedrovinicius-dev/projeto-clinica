#include "Fila.h"

void VisualizarFila()
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
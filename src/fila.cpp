#include "Fila.h"
#include <iostream>
#include "Medico.h"
using namespace std;
int contador = 0;//define o contador como 0 para controlar a ordem de chamada

void VisualizarFila() 
{
    cout << "\n==============================\n\tFILA DE ESPERA\n==============================\n\n";

    if (FilaEspera.empty() && FilaPrioritaria.empty())
    {
        cout << "Não há pacientes na fila de espera.\n"; // imprime se as duas filas tiverem vazias
    }
    else
    {
        if (!FilaPrioritaria.empty())
        { // se a fila prioritaria tiver alguem ele faz:
            cout << "         " << "PRIORITÁRIO" << "          \n\n";

            for (int i = 0; i < FilaPrioritaria.size(); i++)
            {

                cout << i + 1 << " - " << "Nome: " << FilaPrioritaria[i].Nome << "\nIdade: " << FilaPrioritaria[i].Idade << "\n";
                cout << "==============================\n";
            }
        }

        if (!FilaEspera.empty())
        { // se a fila geral tiver alguem ele faz:
            cout << "\n       " << "NÃO PRIORITÁRIOS" << "          \n\n";

            for (int i = 0; i < FilaEspera.size(); i++) //.size mostra o conteudo do vetor, no caso a struct paciente
            {

                cout << i + 1 << " - " << "Nome: " << FilaEspera[i].Nome << "\nIdade: " << FilaEspera[i].Idade << "\n"; // chamada pelos atributos .nome e .idade
                cout << "==============================\n";
                /*if (FilaEspera[i].Paciente_prioritario == true)
                {
                    cout << " (Prioritário)\n";
                }*/
            }
        }
    }
}

void ChamarProximo() 
{

    cout << "\n==============================\n\tPAINEL DE CHAMADA\n==============================\n\n";
    if (FilaEspera.empty() && FilaPrioritaria.empty())
    {
        cout << "Não há pacientes aguardando.\n";
        return; // Retorna para função de inicio
    }

    else
    {
        if (FilaPrioritaria.empty())
        {                                       // se a prioritaria estiver vazia ele chama da normal
            FilaEspera[0].Laudo = rand() % 2;   // geração de valor aleatorio para gerar o relatorio 0 e 1, o "laudo" ira receber esse valor
            atendidos.push_back(FilaEspera[0]); // todas as informações do paciente da fila de espera serão agora atribuidos ao vector atendidos, ou seja, o paciente
                                                // sai da fila de espera e entra no "atendidos"
            cout << "PACIENTE: " << FilaEspera[0].Nome << endl
                 << endl;
            cout << "MEDICO: " << NomeMedico(FilaEspera[0].OpcaoMedico) << endl
                 << endl;
            cout << "SALA: " << NumeroSala(FilaEspera[0].OpcaoMedico);
            FilaEspera.erase(FilaEspera.begin());
            contador = 0;//ao chamar um paciente normal o contador zera para ir para os prioritarios novamente
        }

        else if(contador<2)//se o contador menor que 2, chame da fila prioritaria, dessa forma chama 2 prioritarios e 1 normal
        {
            // fica armazenado no vetor filaespera, o nome do paciente, do medico e a sala,na posição 0 sera o proximo
            // a ser atendido

            // se tiver alguem na prioritaria ele chama primeiro todos da prioritaria depois todos da normal
            FilaPrioritaria[0].Laudo = rand() % 2;   // geração de valor aleatorio para gerar o relatorio 0 e 1, o "laudo" ira receber esse valor
            atendidos.push_back(FilaPrioritaria[0]); // todas as informações do paciente da fila prioritaria serão agora atribuidos ao vector atendidos, ou seja, o paciente
                                                     // sai da fila prioritaria e entra no "atendidos"
            cout << "PACIENTE: " << FilaPrioritaria[0].Nome << endl
                 << endl; // imprime o nome do paciente que esta sendo chamado
            cout << "MEDICO: " << NomeMedico(FilaPrioritaria[0].OpcaoMedico) << endl
                 << endl;                                                   // OpcaoMedico sera um inteiro que sera retornado a funcao NomeMedico,a qual contem um switch
            cout << "SALA: " << NumeroSala(FilaPrioritaria[0].OpcaoMedico); // o mesmo acontece aqui, so muda a função
            FilaPrioritaria.erase(FilaPrioritaria.begin());                 // Aqui foi papo de ficar calvo com o stress q passei...obs: anderson aqui
            contador++;//adiciona 1 ao contador
            // ex: Paciente -> OpcaoMedico -> 3
            //               -> NomeMedico(3) "Pediatra"
            //              -> NumeroSala(3) 103
        }
        else//do contrario chame um paciente normal
        {
            if(FilaEspera.empty()){
                FilaPrioritaria[0].Laudo = rand() % 2;
                atendidos.push_back(FilaPrioritaria[0]);
                cout << "PACIENTE: " << FilaPrioritaria[0].Nome << endl << endl;
                cout << "MEDICO: " << NomeMedico(FilaPrioritaria[0].OpcaoMedico) << endl << endl;
                cout << "SALA: " << NumeroSala(FilaPrioritaria[0].OpcaoMedico);
                FilaPrioritaria.erase(FilaPrioritaria.begin());
                contador++;
            }
            else{
            FilaEspera[0].Laudo = rand() % 2;   
            atendidos.push_back(FilaEspera[0]); 
                                                
            cout << "PACIENTE: " << FilaEspera[0].Nome << endl
                 << endl;
            cout << "MEDICO: " << NomeMedico(FilaEspera[0].OpcaoMedico) << endl
                 << endl;
            cout << "SALA: " << NumeroSala(FilaEspera[0].OpcaoMedico);
            FilaEspera.erase(FilaEspera.begin());
            contador=0;//ao chamar um paciente normal o contador zera para ir para os prioritarios novamente
            }
        }
    }
}
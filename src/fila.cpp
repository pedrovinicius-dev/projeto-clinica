#include "Fila.h"
#include <iostream>
#include "Medico.h"
using namespace std;

void VisualizarFila()//funçaõ do caso 3 que mostra a fila de espera atual
{
    cout << "\n==============================\n\tFILA DE ESPERA\n==============================\n\n";

    if (FilaEspera.empty()&&FilaPrioritaria.empty()) 
    {
        cout << "Não há pacientes na fila de espera.\n";//imprime se as duas filas tiverem vazias
    }
    else
    {if(!FilaPrioritaria.empty()){//se a fila prioritaria tiver alguem ele faz:
        cout<<"         "<<"PRIORITÁRIO"<<"          \n\n";
    
        for (int i = 0; i < FilaPrioritaria.size(); i++){

            
            cout << i + 1 << " - " << "Nome: "<<FilaPrioritaria[i].Nome << " | Idade: " << FilaPrioritaria[i].Idade<<"\n";
            cout << "==============================\n";
        }
    }
    
        if(!FilaEspera.empty()){//se a fila geral tiver alguem ele faz:
        cout<<"\n            "<<"GERAL"<<"          \n\n";
        
        for (int i = 0; i < FilaEspera.size(); i++) //.size mostra o conteudo do vetor, no caso a struct paciente
        {
            
            cout << i + 1 << " - " << "Nome: "<<FilaEspera[i].Nome << " | Idade: " << FilaEspera[i].Idade<<"\n"; //chamada pelos atributos .nome e .idade
            cout << "==============================\n";
            /*if (FilaEspera[i].Paciente_prioritario == true)
            {
                cout << " (Prioritário)\n";
            }*/
            
        }
        }
        
    }
}

void ChamarProximo()//função do caso 2 que chama o proximo paciente para ser atendido
                    // e remove o da lista de espera
{
    cout << "\n==============================\n\tPAINEL DE CHAMADA\n==============================\n\n";
    if (FilaEspera.empty()&&FilaPrioritaria.empty()) //Verifica se o vetor está vazio
    {
        cout << "Não há pacientes aguardando.\n";
        return; //Retorna para função de inicio
    }
    else
    {
        if(FilaPrioritaria.empty()){//se a prioritaria estiver vazia ele chama da normal
        cout << "PACIENTE: " << FilaEspera[0].Nome << endl << endl;
        cout << "MEDICO: " << NomeMedico(FilaEspera[0].OpcaoMedico) << endl << endl;
        cout << "SALA: " << NumeroSala(FilaEspera[0].OpcaoMedico);
        FilaEspera.erase(FilaEspera.begin()); 
        }else{
        //fica armazenado no vetor filaespera, o nome do paciente, do medico e a sala,na posição 0 sera o proximo
        //a ser atendido

        //se tiver alguem na prioritaria ele chama primeiro todos da prioritaria depois todos da normal
        cout << "PACIENTE: " << FilaPrioritaria[0].Nome << endl << endl;//imprime o nome do paciente que esta sendo chamado
        cout << "MEDICO: " << NomeMedico(FilaPrioritaria[0].OpcaoMedico) << endl << endl;//OpcaoMedico sera um inteiro que sera retornado a funcao NomeMedico,a qual contem um switch
        cout << "SALA: " << NumeroSala(FilaPrioritaria[0].OpcaoMedico);//o mesmo acontece aqui, so muda a função
        FilaPrioritaria.erase(FilaPrioritaria.begin()); //Aqui foi papo de ficar calvo com o stress q passei...obs: anderson aqui
        //ex: Paciente -> OpcaoMedico -> 3
        //              -> NomeMedico(3) "Pediatra"
        //             -> NumeroSala(3) 103
        }
    }   
    
      
     


}
#include "Paciente.h"

vector<Paciente> ListaGeral;
vector<Paciente> FilaEspera;

Paciente CadastroPaciente; // Struct
void CadastrarPaciente()   // Função de cadastrar paciente para o caso 1
{
  int opcao;

  cout << "\n==============================\n\tCADASTRO DE PACIENTE\n==============================\n\n";
  cout << "Nome completo: ";
  cin.ignore(); //ignora caracter do buffer
  getline(cin, CadastroPaciente.Nome); //ler nome e adiciona na struct
  cout << "Idade do paciente: ";
  cin >> CadastroPaciente.Idade; //Ler idade e adiciona na struct

  //funcao perguntar medico
  //funcao perguntar prioridade

  cout << "\n\nPaciente cadastrado com sucesso!\n";
}

void PerguntarMedico()
{
  int opcao = 0;

  while(opcao < 1 || opcao > 4)
  {
    cout << "\n\nMédico: \n1 - Cardiologista\n2 - Clínico geral\n3 - Pediatra\n4 - Ortopedista\n\nEscolha uma opção: > ";
    cin >> opcao;

    if(opcao < 1 || opcao > 4) cout << "\nDigite uma opção valida!\nTente novamente...\n"; //Tratamento para escolha correta
  }
  CadastroPaciente.OpcaoMedico = opcao; //A opção de meedico escolhida vai para struct
  return; //Vai retornar para a função de cadastrar paciente
}
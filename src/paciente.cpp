#include "Paciente.h"
using namespace std;


vector<Paciente> ListaGeral;
vector<Paciente> FilaEspera;
vector<Paciente> FilaPrioritaria;

Paciente CadastroPaciente; // Struct Cadastro Paciente, "Paciente" é como se fosse o tipo da variavel e "cadastropaciente"seria a variavel
void CadastrarPaciente()   // Função de cadastrar paciente para o caso 1
{
  int opcao;

  cout << "\n==============================\n\tCADASTRO DE PACIENTE\n==============================\n\n";
  cout << "Nome completo: ";
  cin.ignore();                        // ignora caracter do buffer
  getline(cin, CadastroPaciente.Nome); // ler nome e adiciona na struct
  cout << "Idade do paciente: ";
  cin >> CadastroPaciente.Idade; // Ler idade e adiciona na struct

  PerguntarMedico(); //pós cadastro de nome e idade vai entrar nessa função
  PerguntarPrioridade(); //pós escolha do medico entrará nessa função

  cout << "\n\nPaciente cadastrado com sucesso!\n";
}

void PerguntarMedico()
{
  int opcao = 0;

  while (opcao < 1 || opcao > 4)
  {
    cout << "\n\nMédico: \n1 - Cardiologista\n2 - Clínico geral\n3 - Pediatra\n4 - Ortopedista\n\nEscolha uma opção: > ";
    cin >> opcao;

    if (opcao < 1 || opcao > 4)
      cout << "\nDigite uma opção valida!\nTente novamente...\n"; // Tratamento para escolha correta
  }
  CadastroPaciente.OpcaoMedico = opcao; // A opção de meedico escolhida vai para struct
  return;                               // Vai retornar para a função de cadastrar paciente
}

void PerguntarPrioridade()
{
  int opcao = 0;

  while (opcao < 1 || opcao > 2)
  {
    cout << "\n\nPossui prioridade?\n1 - Sim\n2 - Não\n\nEscolha uma opção: > ";
    cin >> opcao;

    if (opcao < 1 || opcao > 2)
      cout << "\nDigite uma opção valida!\nTente novamente...\n"; // Tratamento escolha correta
  }
  if (opcao == 1)
  {
    CadastroPaciente.Paciente_prioritario = true;
    FilaPrioritaria.push_back(CadastroPaciente); // Vai colocar o paciente prioritario no inicio da fila(begin)
  //erro aqui, quem for prioritario fura fila, mesmo dos prioritarios
  }
  if (opcao == 2)
  {
    CadastroPaciente.Paciente_prioritario = false;
    FilaEspera.push_back(CadastroPaciente); // Vai colocar na fila normal
  }
  ListaGeral.push_back(CadastroPaciente); // Adiciona o paciente cadastrado no vetor lista de pacientes geral
  return; // Vai retornar para a função de cadastrar paciente
}
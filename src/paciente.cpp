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
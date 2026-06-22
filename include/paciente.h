#ifndef PACIENTE_H// Guarda de inclusão: impede que este cabeçalho seja lido mais de uma vez
#define PACIENTE_H

#include <iostream>
#include <string>
#include <vector>


struct Paciente
{
  std::string Nome;
  int Idade;
  int OpcaoMedico;
  bool Paciente_prioritario;
  int Laudo;
};


void CadastrarPaciente();
void PerguntarMedico(); 
void PerguntarPrioridade();

//Vector globais, aqui é avisado pra o sistema que eles existem, mas eles são criados de verdade no paciente.cpp
//para poderem ser usados em outros arquivos cpp, se tornando globais
extern std::vector<Paciente> ListaGeral; //Vai guardar todos os pacientes do sistema
extern std::vector<Paciente> FilaEspera; //Entra aqui quando o paciente e cadastrado, quando ele for chamado (op2), ele é removido da fila
extern std::vector<Paciente> FilaPrioritaria;//fila dos idosos separada
extern std::vector<Paciente> atendidos;//lista dos pacientes ja atendidos

#endif
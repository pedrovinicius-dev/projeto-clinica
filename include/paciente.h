#ifndef PACIENTE_H
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
};


void CadastrarPaciente();
void PerguntarMedico(); 
void PerguntarPrioridade();

//Vector globais
extern std::vector<Paciente> ListaGeral; //Vai guardar todos os pacientes do sistema
extern std::vector<Paciente> FilaEspera; //Entra aqui quando o paciente e cadastrado, quando ele for chamado (op2), ele é removido da fila


#endif
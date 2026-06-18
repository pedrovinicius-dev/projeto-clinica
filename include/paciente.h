#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
#include <vector>

void CadastrarPaciente();
void PerguntarMedico(); 
void PerguntarPrioridade();

struct Paciente
{
  string Nome;
  int Idade;
  int OpcaoMedico;
  bool Paciente_prioritario;
};

//Vector globais
extern vector<Paciente> ListaGeral; //Vai guardar todos os pacientes do sistema
extern vector<Paciente> FilaEspera; //Entra aqui quando o paciente e cadastrado, quando ele for chamado (op2), ele é removido da fila


#endif
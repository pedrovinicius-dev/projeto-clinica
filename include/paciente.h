#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

extern vector<Paciente> ListaGeral;
extern vector<Paciente> FilaEspera;

#endif
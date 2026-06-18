#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

extern vector<Paciente> ListaGeral;
extern vector<Paciente> FilaEspera;

struct Paciente
{
  string Nome;
  int Idade;
  int OpcaoMedico;
  bool Paciente_prioritario;
};

#endif
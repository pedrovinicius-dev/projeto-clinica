#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
using namespace std;

struct Paciente
{
  string Nome;
  int Idade;
  int OpcaoMedico;
  bool Paciente_prioritario;
};

#endif
#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <vector>
#include <locale.h>
#include "Paciente.h"
using namespace std;

void IniciarClinicaEAJ();

//Vector globais
extern vector<Paciente> ListaGeral; //Vai guardar todos os pacientes do sistema
extern vector<Paciente> FilaEspera; //Entra aqui quando o paciente e cadastrado, quando ele for chamado (op2), ele é removido da fila

#endif
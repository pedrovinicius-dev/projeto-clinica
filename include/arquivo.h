#include <fstream>
//ofstream sai do programa e entra no arquivo
//ifstream sai do arquivo e entra no programa
//fstream pode ser entrada e saida
#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <vector>
#include "paciente.h"

using namespace std;

// Declaração das funções de persistência
void salvarAtendidos(const vector<Paciente>& atendidos);
void carregarAtendidos(vector<Paciente>& atendidos);

#endif
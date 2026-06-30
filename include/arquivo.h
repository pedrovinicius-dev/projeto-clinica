#include <fstream>
// ofstream sai do programa e entra no arquivo
// ifstream sai do arquivo e entra no programa
// fstream pode ser entrada e saida
#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <vector>
#include "paciente.h"

// Declaração das funções de persistência
void salvarAtendidos(const std::vector<Paciente> &atendidos);
void carregarAtendidos(std::vector<Paciente> &atendidos);
void salvarListaGeral(const std::vector<Paciente> &ListaGeral);
void CarregarListaGeral(std::vector<Paciente> &ListaGeral);
void salvarFilaEspera(const std::vector<Paciente> &FilaEspera);
void CarregarFilaEspera(std::vector<Paciente> &FilaEspera);
void salvarFilaPrioritaria(const std::vector<Paciente> &FilaPrioritaria);
void CarregarFilaPrioritaria(std::vector<Paciente> &FilaPrioritaria);

#endif
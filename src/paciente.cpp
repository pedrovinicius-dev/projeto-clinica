#include <iostream>
#include <string>
#include <vector>
#include <locale.h>
#include "paciente.h"

using namespace std;

struct paciente
{
  string nome;
  int idade;
  bool prioridade;
};

void principal()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");
  string name;
  int age, N, prioridade_inteira; // N = numeros de paciente
  bool priority;
  cout << "\n===========================================\n\tCADASTRO DE PACIENTE\n===========================================\n\nDigite a quantidade de pacientes: > ";
  cin >> N; // Ler numeros de paciente

  vector<paciente> lista; // Guarda as informaçoes dos pacientes
  for (int i = 0; i < N; i++)
  {
    cout << "Nome:";
    cin >> name;
    cout << "Idade:";
    cin >> age;
    cout << "Possui prioridade?\n1 - Sim\n2 - Não\n";
    cin >> prioridade_inteira;

    if (prioridade_inteira == 1)
      priority = true;

    else
    {
      priority = false;
    }
    paciente N;
    N.prioridade = priority;
    N.nome = name;
    N.idade = age;
    lista.push_back(N);
  }

  cout << "===========================\nlista de pacientes\n";
  for (int i = 0; i < lista.size(); i++) //Mostra 
  {
    cout << "| Paciente " << i + 1 << " |\n";
    cout << "Nome: " << lista[i].nome << "\n";
    cout << "Idade: " << lista[i].idade << "\n";
    if (lista[i].prioridade == true)
    {
      cout << "Prioridade: Sim\n";
    }
    else
    {
      cout << "Prioridade: Não\n";
    }
  }
}
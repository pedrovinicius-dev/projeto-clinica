#include <iostream>
#include <string>
#include <vector>
#include <locale.h>
#include "paciente.h"


using namespace std;

     struct paciente{
        string nome;
        int idade;
        bool prioridade;
    };
  
void principal() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
  string name;
  int age,N, prioridade_inteira;
  bool priority;
  cout<<"digite o número de pacientes:\n";
  cin>>N;
  vector<paciente> lista;
  for(int i =0;i<N;i++){
    cout<<"nome:";
    cin>>name;
    cout<<"idade:";
    cin>>age;
    cout<<"possui prioridade?\n1-sim\n2-não\n";
    cin>>prioridade_inteira;
    if(prioridade_inteira ==1){
        priority=true;
    }else{priority=false;}
    paciente N;
    N.prioridade = priority;
    N.nome = name;
    N.idade = age;
    lista.push_back(N);
  }
  cout<<"===========================\nlista de pacientes\n";
  for(int i =0;i<lista.size();i++){
    cout<<"|paciente "<<i+1<<"|\n";
    cout<<"nome: "<<lista[i].nome<<"\n";
    cout<<"idade: "<<lista[i].idade<<"\n";
    if(lista[i].prioridade==true){
        cout<<"prioridade:sim\n";
    }else{cout<<"prioridade:não\n";}
  } 

}
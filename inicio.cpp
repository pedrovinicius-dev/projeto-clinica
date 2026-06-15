#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    std::string paciente;
    std::cout<<"bem vindo a clinica do eaj\ndigite o nome do paciente";
    std::cin>>paciente;

}
#include "Medico.h"
using namespace std;
string NomeMedico(int opcao) //Função que retorna uma opcao int em nome do médico
{
    switch (opcao)
    {
    case 1:
        return "Cardiologista";
    case 2:
        return "Clínico geral";
    case 3:
        return "Pediatra";
    case 4:
        return "Ortopedista";
    default:
        return "Médico não encontrado";
    }
}
//Ambas as funçoes vao saber qual tem que ser, a partir da variavel da OpcaoMedico da struct Paciente
int NumeroSala(int opcao) //Função para a escolha da sala
{
    switch (opcao)
    {
    case 1:
        return 101;
    case 2:
        return 102;
    case 3:
        return 103;
    case 4:
        return 104;
    default:
        return 0;
    }
}
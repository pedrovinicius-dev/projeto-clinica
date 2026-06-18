#include "Medico.h"

string NomeMedico(int opcao) //Função que retorna uma opcao em nome do médico
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


#include "Medico.h"
#include "paciente.h"
#include <string>


using namespace std;
vector<Paciente>atendidos;
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

void relatorio(){

string medico;
    cout << "\n==============================\n\t  RELATÓRIOS\n==============================\n\n";
if(!atendidos.empty()){
for(int i=0;i<atendidos.size();i++){
    cout<<"PACIENTE "<<i + 1<<": \nNome: "<<atendidos[i].Nome<<"\n";
    int aleatorio = atendidos[i].Laudo;
        switch (atendidos[i].OpcaoMedico)
    {
    case 1:
        medico ="cardiologista"; 
        cout<<"Atendido por: "<<medico<<"\n";
        if(aleatorio==0){
            cout<<"Relatório: Apresenta picos de hipertensão e queixa de dor torácica.Encaminhado para exames de ecocardiograma e teste ergométrico de urgência.\n";
        }else{
            cout<<"Relatório: Exame clínico normal. Eletrocardiograma dentro dos padrões, sem arritmias. Paciente liberado com orientações de rotina.\n";
        }
        cout<<"==============================\n";
        break;
    case 2:
        medico = "Clínico geral";
        cout<<"Atendido por: "<<medico<<"\n";
        if(aleatorio==0){
            cout<<"Relatório: Suspeita de infecção bacteriana aguda devido ao quadro febril persistente. Prescrita medicação antibiótica e solicitado hemograma completo.\n";

        }else{
            cout<<"Relatório: Sinais vitais estáveis (pressão e temperatura normais). Sintomas leves resolvidos. Recomendado apenas repouso e hidratação.\n";
        }
        cout<<"==============================\n";
        break;
    case 3:
        medico = "Pediatra";
        cout<<"Atendido por: "<<medico<<"\n";
        if(aleatorio==0){
            cout<<"Relatório: Quadro de desidratação leve por virose gastrointestinal. Paciente encaminhado para a sala de medicação para soro na veia e observação.\n";
        }else{
            cout<<"Relatório: Desenvolvimento infantil, peso e estatura estritamente dentro da curva normal para a idade. Carteira de vacinação em dia.\n";
        }
        cout<<"==============================\n";
        break;
    case 4:
        medico = "Ortopedista";
        cout<<"Atendido por: "<<medico<<"\n";
        if(aleatorio==0){
            cout<<"Relatório: Suspeita de fissura óssea ou lesão crônica na articulação. Imobilização local realizada e solicitada Ressonância Magnética com retorno urgente.\n";
        }else{
            cout<<"Relatório: Ausência de fraturas ou lesões ligamentares graves no exame físico. Dor muscular tratada com analgésicos simples. Alta médica.\n";
        }
        cout<<"==============================\n";
        break;
    default:
        break;
    }
}
}else{
    cout<<"Não existe relatório disponível";
}
}
#include "arquivo.h"
#include <fstream>
#include <iostream>

using namespace std;

// Caminho relativo apontando para a pasta que está na imagem
const string CAMINHO_PACIENTES = "dados/atendidos.txt"; 

void salvarPacientes(const vector<Paciente>& atendidos) {
    // Aqui você vai abrir o arquivo usando ofstream
    // Ex: ofstream arquivo(CAMINHO_PACIENTES);
    // Abre o arquivo em modo de SAÍDA (ofstream)
    // Se o arquivo não existir, ele cria. Se existir, ele apaga o antigo e cria um novo.
    ofstream arquivo (CAMINHO_PACIENTES);

    // Teste de segurança: verifica se o Windows permitiu abrir/criar o arquivo
    if (!arquivo.is_open()) {
        cout << "Erro crítico: Não foi possível abrir o arquivo para salvar!\n";
        return;
    }
    for(int i=0;i<atendidos.size();i++){
        arquivo << atendidos[i].Nome << "\n";
        arquivo << atendidos[i].Idade << "\n";
        arquivo << atendidos[i].Paciente_prioritario << "\n";
        arquivo << atendidos[i].OpcaoMedico << "\n";
        arquivo << atendidos[i].Laudo << "\n";

    }
    arquivo.close();
    cout << "Dados salvos com sucesso em " << CAMINHO_PACIENTES << "!\n";
}

void carregarPacientes(vector<Paciente>& atendidos) {
    // Aqui você vai abrir o arquivo usando ifstream
    // Ex: ifstream arquivo(CAMINHO_PACIENTES);
    ifstream arquivo (CAMINHO_PACIENTES);

    // Teste de segurança: se o arquivo não existir (ex: primeira vez rodando o app),
    // ele simplesmente sai da função sem quebrar o programa.
    if (!arquivo.is_open()) {
        cout << "Aviso: Nenhum histórico de atendimentos encontrado. Começando do zero.\n";
        return;
    }
    // Garante que o vetor comece limpo para não duplicar dados
    atendidos.clear();

    // Cria um "paciente boneco" temporário para receber os dados do arquivo
    Paciente p;

    // O truque do C++: O while vai tentar ler a primeira linha (o Nome).
    // Se ele conseguir ler o nome, significa que o arquivo ainda não acabou!
    while (getline(arquivo, p.Nome)) {
        
        // Se pegou o nome, as próximas linhas obrigatoriamente são os números:
        arquivo >> p.Idade;
        arquivo >> p.Paciente_prioritario;
        arquivo >> p.OpcaoMedico;
        arquivo >> p.Laudo;

        // PULO DO GATO 🐈: Depois de ler números com ">>", o C++ deixa um "\n" (enter)
        // solto na memória. Precisamos limpar esse enter com o ignore(),
        // senão o próximo getline() vai ler um texto vazio e quebrar tudo!
        arquivo.ignore();

        // Agora que o boneco 'p' está totalmente preenchido, joga ele no vetor!
        atendidos.push_back(p);

        }

    // Fecha o arquivo após terminar de ler tudo
    arquivo.close();
    cout << "Histórico carregado! " << atendidos.size() << " pacientes recuperados.\n";
}

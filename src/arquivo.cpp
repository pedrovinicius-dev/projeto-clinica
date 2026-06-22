#include "arquivo.h"
#include <fstream>
#include <iostream>

using namespace std;

// Caminho relativo apontando para a pasta que está na imagem
const string CAMINHO_PACIENTES = "dados/pacientes.txt"; 

void salvarAtendidos(const vector<Paciente>& atendidos) {
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
    

}

void carregarAtendidos(vector<Paciente>& atendidos) {
    // Aqui você vai abrir o arquivo usando ifstream
    // Ex: ifstream arquivo(CAMINHO_PACIENTES);
}
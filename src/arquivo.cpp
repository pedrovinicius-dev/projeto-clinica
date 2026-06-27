#include "arquivo.h"
#include <fstream>
#include <iostream>

using namespace std;

// Caminho relativo apontando para a pasta que está na imagem //Auxilio IA
const string CAMINHO_ATENDIDOS = "dados/atendidos.txt";
const string CAMINHO_GERAL = "dados/listageral.txt";
const string CAMINHO_FILAESPERA = "dados/filaespera.txt";
const string CAMINHO_PRIORITARIO = "dados/filaprioritaria.txt";

void salvarAtendidos(const vector<Paciente> &atendidos)
{

    ofstream arquivo(CAMINHO_ATENDIDOS); // ofstream indica que você quer mandar informações do programa pra o arquivo

    // se o arquivo não existir imprimir
    if (!arquivo.is_open())
    {
        cout << "Não foi possível abrir o arquivo para salvar!\n";
        return;
    }
    for (int i = 0; i < atendidos.size(); i++)
    { // loop pra armazenar os dados do paciente no txt
        arquivo << atendidos[i].Nome << "\n";
        arquivo << atendidos[i].Idade << "\n";
        arquivo << atendidos[i].OpcaoMedico << "\n";
        arquivo << atendidos[i].Paciente_prioritario << "\n";
        arquivo << atendidos[i].Laudo << "\n";
    }
    arquivo.close(); // fecha o arquivo
    cout << "Dados salvos com sucesso em " << CAMINHO_ATENDIDOS << "!\n";
}

void carregarAtendidos(vector<Paciente> &atendidos)
{

    ifstream arquivo(CAMINHO_ATENDIDOS); // ifstream indica que você quer abrir o arquivo e mandar informações do arquivo pra o programa

    // se o arquivo não existir imprimir
    if (!arquivo.is_open())
    {
        cout << "Aviso: Nenhum histórico de atendimentos encontrado. Começando do zero.\n";
        return;
    }

    atendidos.clear(); // limpa todo o vetor pra se o usuario salvar e tentar carregar não deixe os dados duplicados

    Paciente p; // cria um paciente para receber os dados e inserir no vetor

    while (getline(arquivo, p.Nome))
    { // enquanto tiver algo para ser lido ele ira preencher a struct paciente p com os dados abaixo

        // Se pegou o nome, as próximas linhas obrigatoriamente são os números:
        arquivo >> p.Idade;
        arquivo >> p.OpcaoMedico;
        arquivo >> p.Paciente_prioritario;
        arquivo >> p.Laudo;

        arquivo.ignore(); // apaga o enter, pra evitar erro de formatação

        atendidos.push_back(p); // joga no vetor o paciente p
    }

    // Fecha o arquivo após terminar de ler tudo
    arquivo.close();
    cout << "Pacientes Atendidos carregados! " << atendidos.size() << " pacientes recuperados.\n";
}

void salvarListaGeral(const vector<Paciente> &ListaGeral)
{
    ofstream arquivog(CAMINHO_GERAL);

    if (!arquivog.is_open())
    {
        cout << "Não foi possível abrir o arquivo para salvar!\n";
        return;
    }
    for (int i = 0; i < ListaGeral.size(); i++)
    {
        arquivog << ListaGeral[i].Nome << "\n";
        arquivog << ListaGeral[i].Idade << "\n";
        arquivog << ListaGeral[i].OpcaoMedico << "\n";
        arquivog << ListaGeral[i].Paciente_prioritario << "\n";
    }
    arquivog.close();
    cout << "Dados salvos com sucesso em " << CAMINHO_GERAL << "!\n";
}

void CarregarListaGeral(vector<Paciente> &ListaGeral)
{

    ifstream arquivog(CAMINHO_GERAL);

    if (!arquivog.is_open())
    {
        cout << "Aviso: Nenhum histórico de atendimentos encontrado. Começando do zero.\n";
        return;
    }

    ListaGeral.clear();

    Paciente g;

    while (getline(arquivog, g.Nome))
    {

        arquivog >> g.Idade;
        arquivog >> g.OpcaoMedico;
        arquivog >> g.Paciente_prioritario;

        arquivog.ignore();
        ListaGeral.push_back(g);
    }
    arquivog.close();
    cout << "Lista Geral carregada! " << ListaGeral.size() << " pacientes recuperados.\n";
}

void salvarFilaEspera(const vector<Paciente> &FilaEspera)
{
    ofstream arquivoE(CAMINHO_FILAESPERA);

    if (!arquivoE.is_open())
    {
        cout << "Não foi possível abrir o arquivo para salvar!\n";
        return;
    }
    for (int i = 0; i < FilaEspera.size(); i++)
    {
        arquivoE << FilaEspera[i].Nome << "\n";
        arquivoE << FilaEspera[i].Idade << "\n";
        arquivoE << FilaEspera[i].OpcaoMedico << "\n";
        arquivoE << FilaEspera[i].Paciente_prioritario << "\n";
    }
    arquivoE.close();
    cout << "Dados salvos com sucesso em " << CAMINHO_FILAESPERA << "!\n";
}

void CarregarFilaEspera(vector<Paciente> &FilaEspera)
{
    ifstream arquivoE(CAMINHO_FILAESPERA);

    if (!arquivoE.is_open())
    {
        cout << "Aviso: Nenhum histórico de atendimentos encontrado. Começando do zero.\n";
        return;
    }

    FilaEspera.clear();

    Paciente E;

    while (getline(arquivoE, E.Nome))
    {
        arquivoE >> E.Idade;
        arquivoE >> E.OpcaoMedico;
        arquivoE >> E.Paciente_prioritario;

        arquivoE.ignore();
        FilaEspera.push_back(E);
    }
    arquivoE.close();
    cout << "Lista de Espera carregada! " << FilaEspera.size() << " pacientes recuperados.\n";
}

void salvarFilaPrioritaria(const vector<Paciente> &FilaPrioritaria)
{
    ofstream arquivoP(CAMINHO_PRIORITARIO);

    if (!arquivoP.is_open())
    {
        cout << "Não foi possível abrir o arquivo para salvar!\n";
        return;
    }
    for (int i = 0; i < FilaPrioritaria.size(); i++)
    {
        arquivoP << FilaPrioritaria[i].Nome << "\n";
        arquivoP << FilaPrioritaria[i].Idade << "\n";
        arquivoP << FilaPrioritaria[i].OpcaoMedico << "\n";
        arquivoP << FilaPrioritaria[i].Paciente_prioritario << "\n";
    }
    arquivoP.close();
    cout << "Dados salvos com sucesso em " << CAMINHO_PRIORITARIO << "!\n";
}

void CarregarFilaPrioritaria(vector<Paciente> &FilaPrioritaria)
{
    ifstream arquivoP(CAMINHO_PRIORITARIO);

    if (!arquivoP.is_open())
    {
        cout << "Aviso: Nenhum histórico de atendimentos encontrado. Começando do zero.\n";
        return;
    }

    FilaPrioritaria.clear();

    Paciente P;

    while (getline(arquivoP, P.Nome))
    {
        arquivoP >> P.Idade;
        arquivoP >> P.OpcaoMedico;
        arquivoP >> P.Paciente_prioritario;

        arquivoP.ignore();
        FilaPrioritaria.push_back(P);
    }
    arquivoP.close();
    cout << "Fila Prioritária carregada! " << FilaPrioritaria.size() << " pacientes recuperados.\n";
}
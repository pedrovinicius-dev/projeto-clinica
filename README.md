#  Sistema de Cadastro e Fila - Clínica EAJ

Este é o projeto final desenvolvido para a disciplina de ALGORITMOS E PROGRAMAÇÃO, correspondente à Avaliação III do 1º período do curso de Análise e Desenvolvimento de Sistemas (ADS) na **UFRN (Universidade Federal do Rio Grande do Norte)**.

O sistema consiste em um gerenciador de atendimento para uma clínica médica via terminal, simulando a recepção, triagem por prioridade, chamados e relatórios médicos.

---

##  Funcionalidades do Sistema

O software foi desenvolvido para rodar diretamente no terminal do usuário, oferecendo as seguintes opções de interação:
- **Cadastrar Paciente:** Coleta de dados como Nome, Idade, Especialidade Médica desejada e classificação de prioridade.
- **Chamar Próximo Paciente:** Remove e exibe o próximo paciente da fila respeitando as regras de triagem.
- **Visualizar Fila:** Mostra em tempo real a listagem ordenada de pacientes aguardando atendimento.
- **Pesquisar Paciente:** Localiza cadastros específicos no sistema.
- **Listar Pacientes / Relatório por Médico:** 
- **Persistência de Dados:** Salva e carrega o estado da clínica em arquivos de texto locais, garantindo que as informações não sejam perdidas ao fechar o programa.

---

##  Requisitos Técnicos Implementados

Para atender às exigências da avaliação, o projeto integra os seguintes conceitos estruturais de C++:

1. **Modularização:** Separação lógica do código separando as assinaturas em arquivos de cabeçalho (`.h` na pasta `include`) e implementações em arquivos de origem (`.cpp` na pasta `src`).
2. **Estruturas Dinâmicas (STL):** Utilização de `std::vector` para manipulação das filas de espera e listas gerais.
3. **Structs:** Definição de tipos de dados para a representação do modelo de entidades (`struct Paciente`).
4. **Algoritmos de Busca, Ordenação e Recursividade:**.
5. **Persistência de Arquivos:** Salvamento e leitura de arquivos locais em formato ASCII para manutenção dos registros médicos.

---

##  Estrutura do Repositório

Conforme exibido na organização das pastas, o projeto divide-se em:
- `/include`: Guarda as definições e assinaturas dos cabeçalhos (`.h`).
- `/src`: Contém a lógica de implementação das funções (`.cpp`).
- `main.cpp`: Ponto de entrada que inicializa o fluxo principal do menu da clínica.
- `.gitignore`: Arquivo para evitar o envio de executáveis ou arquivos temporários do compilador.

---

## 🛠️ Como Executar o Projeto

Caso queira clonar e compilar o projeto localmente por meio do terminal:

1. Clone o repositório:
```bash
   git clone [https://github.com/andermrn/projeto-clinica.git](https://github.com/andermrn/projeto-clinica.git)

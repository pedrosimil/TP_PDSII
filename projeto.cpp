#include "projeto.h"
#include <iostream>

// Construtor da classe Projeto que inicializa o título usando o construtor da classe base Atividade
Projeto::Projeto(const std::string& titulo) : Atividade(titulo) {}

Projeto::Projeto(const std::string& titulo, int numero)
    : titulo(titulo), numero(numero) {}

// Destrutor da classe Projeto, libera a memória alocada para as atividades associadas ao projeto
Projeto::~Projeto() {
    for (auto& atividade : atividades) {
        delete atividade;
    }
}

void Projeto::criarProjeto(const std::string& titulo, int numero) {
    this->titulo = titulo;
    this->numero = numero;
}

void Projeto::excluirProjeto() {
    // Implementar lógica para excluir projeto
}

void Projeto::editarProjeto(const std::string& novoTitulo) {
    this->titulo = novoTitulo;
}

void Projeto::adicionarTarefa(Tarefa* tarefa) {
    tasks.push_back(tarefa);
}

void Projeto::removerTarefa(int numeroTarefa) {
    // Implementar lógica para remover tarefa
}

void Projeto::adicionarAtividade(Atividade* atividade) {
    atividades.push_back(atividade);
}

// Exibe os detalhes do projeto, incluindo seu título e as atividades associadas
void Projeto::exibirDetalhes() const {
    std::cout << "Título do Projeto: " << titulo << std::endl;
    std::cout << "Número do Projeto: " << numero << std::endl;
    std::cout << "Atividades do Projeto:" << std::endl;
    for (const auto& atividade : atividades) {
        atividade->exibirDetalhes();
    }
    std::cout << "Tarefas:" << std::endl;
    for (const auto& tarefa : tasks) {
        tarefa->exibirDetalhes();
    }
}

void Projeto::excluir() {
    try {
        // Verifica se há atividades associadas ao projeto
        if (atividades.empty()) {
            throw std::logic_error("O projeto não pode ser excluído sem atividades associadas.");
        }

        // Libera memória alocada para as atividades
        for (auto& atividade : atividades) {
            delete atividade;
        }

        // Limpa o vetor de atividades
        atividades.clear();

        // Imprime mensagem de sucesso
        std::cout << "Projeto '" << getTitulo() << "' excluído com sucesso!" << std::endl;

    } catch (const std::exception& e) {
        // Captura exceções e imprime mensagens de erro
        std::cerr << "Erro ao excluir projeto: " << e.what() << std::endl;}
}

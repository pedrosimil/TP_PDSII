#include "tarefa.h"
#include <iostream>

// Implementação do construtor da classe Tarefa
Tarefa::Tarefa(const std::string& titulo)
    : Atividade(titulo){
    // Tratamento de exceção para garantir que o título da tarefa não seja vazio
    try {
        if (titulo.empty()) {
            throw std::invalid_argument("O título da tarefa não pode ser vazio.");
        }
    } catch (const std::invalid_argument& e) {
        // Captura exceções e imprime mensagens de erro
        std::cerr << "Erro ao criar tarefa: " << e.what() << std::endl;
        throw; // Relança a exceção após imprimir a mensagem de erro
    }
}

Tarefa::Tarefa(const std::string& titulo, const std::string& descricao, const std::string& data)
    : Atividade(titulo), descricao(descricao), data(data) {
    // Tratamento de exceção para garantir que o título da tarefa não seja vazio
    try {
        if (titulo.empty()) {
            throw std::invalid_argument("O título da tarefa não pode ser vazio.");
        }
    } catch (const std::invalid_argument& e) {
        // Captura exceções e imprime mensagens de erro
        std::cerr << "Erro ao criar tarefa: " << e.what() << std::endl;
        throw; // Relança a exceção após imprimir a mensagem de erro
    }
}

// Implementação do destrutor da classe Tarefa
Tarefa::~Tarefa() {}

// Método para exibir detalhes da tarefa
void Tarefa::exibirDetalhes() const {
    std::cout << "Tarefa: " << getTitulo() << std::endl;
    std::cout << "Descrição: " << descricao << std::endl;
    std::cout << "Data: " << data << std::endl;
}

// Método para editar os atributos da tarefa (título, descrição, data)
void Tarefa::editar(const std::string& novoTitulo, const std::string& novaDescricao, const std::string& novaData) {
    try {
        // Verifica se os novos valores são válidos
        if (novoTitulo.empty()) {
            throw std::invalid_argument("O novo título da tarefa não pode ser vazio.");
        }

        if (novaDescricao.empty()) {
            throw std::invalid_argument("A nova descrição da tarefa não pode ser vazia.");
        }

        if (novaData.empty()) {
            throw std::invalid_argument("A nova data da tarefa não pode ser vazia.");
        }

        // Realiza as alterações necessárias
        setTitulo(novoTitulo);
        descricao = novaDescricao;
        data = novaData;

        std::cout << "Tarefa editada com sucesso!" << std::endl;
    } catch (const std::exception& e) {
        // Captura exceções e imprime mensagens de erro
        std::cerr << "Erro ao editar tarefa: " << e.what() << std::endl;
    }
}

#include "tarefa.h"
#include <iostream>
#include <stdexcept>

// Implementação do construtor da classe Tarefa
Tarefa::Tarefa(const std::string& titulo)
    : Atividade(titulo) {
    // Tratamento de exceção para garantir que o título da tarefa não seja vazio
    if (titulo.empty()) {
        throw std::invalid_argument("O título da tarefa não pode ser vazio.");
    }
}

Tarefa::Tarefa(const std::string& titulo, const std::string& descricao, const Data& data, int numeroTarefa)
    : titulo(titulo), descricao(descricao), data(data), numeroTarefa(numeroTarefa) {}

// Implementação do destrutor da classe Tarefa
Tarefa::~Tarefa() {}

// Implementação do método para exibir detalhes da tarefa
void Tarefa::exibirDetalhes() const {
    std::cout << "Título da Tarefa: " << titulo << std::endl;
    std::cout << "Descrição: " << descricao << std::endl;
    std::cout << "Data: " << data.toString() << std::endl;
    std::cout << "Número da Tarefa: " << numeroTarefa << std::endl;
}

// Implementação do método para editar os atributos da tarefa
void Tarefa::editar(const std::string& novoTitulo, const std::string& novaDescricao, const Data& novaData) {
    if (novoTitulo.empty()) {
        throw std::invalid_argument("O título da tarefa não pode ser vazio.");
    }
    this->titulo = novoTitulo;
    this->descricao = novaDescricao;
    this->data = novaData;
}

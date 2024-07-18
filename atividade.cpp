#include "atividade.h"
#include <stdexcept>

// Implementação do construtor da classe Atividade
Atividade::Atividade(const std::string& titulo): titulo(titulo) {
    // Tratamento de exceção para garantir que o título não seja vazio
    try {
        if (titulo.empty()) {
            throw std::invalid_argument("O título da atividade não pode ser vazio.");
        }

        // Inicialização do membro da classe
        this->titulo = titulo;

    } catch (const std::invalid_argument& e) {
        // Captura exceções e imprime mensagens de erro
        throw std::runtime_error("Erro ao criar atividade: " + std::string(e.what()));
    }
}

// Implementação do destrutor da classe Atividade
Atividade::~Atividade() {}

// Método para obter o título da atividade
std::string Atividade::getTitulo() const {
    return titulo;
}

// Método para definir um novo título para a atividade
void Atividade::setTitulo(const std::string& novoTitulo) {
    titulo = novoTitulo;
}

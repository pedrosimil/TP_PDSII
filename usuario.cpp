#include "usuario.h"
#include <iostream>
#include <stdexcept>

// Implementação do construtor da classe Usuario
Usuario::Usuario(const std::string& username, const std::string& email, const std::string& senha)
    : username(username), email(email), senha(senha) {
    // Tratamento de exceção para garantir que nenhum dos parâmetros seja vazio
    if (username.empty() || email.empty() || senha.empty()) {
        throw std::invalid_argument("Nenhum dos parâmetros (username, email, senha) pode ser vazio.");
    }
}

// Implementação do destrutor da classe Usuario
Usuario::~Usuario() {}

// Método para obter o username do usuário
std::string Usuario::getUsername() const {
    return username;
}

// Método para obter o email do usuário
std::string Usuario::getEmail() const {
    return email;
}

// Método para obter a senha do usuário
std::string Usuario::getSenha() const {
    return senha;
}

// Método para exibir detalhes do usuário na saída padrão
void Usuario::exibirDetalhes() const {
    std::cout << "Username: " << username << std::endl;
    std::cout << "Email: " << email << std::endl;
}

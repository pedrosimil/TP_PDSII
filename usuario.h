#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
public:
    // Construtor que recebe um nome de usuário, um e-mail e uma senha como parâmetros
    Usuario(const std::string& username, const std::string& email, const std::string& senha);

    // Destrutor virtual da classe Usuario
    virtual ~Usuario();

    // Métodos para obter informações sobre o usuário
    std::string getUsername() const;
    std::string getEmail() const;
    std::string getSenha() const;

    // Método para exibir os detalhes do usuário, como nome de usuário e e-mail
    void exibirDetalhes() const;

private:
    std::string username;  
    std::string email;     
    std::string senha;    
};

#endif 

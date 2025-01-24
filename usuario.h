#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
public:
    Usuario(const std::string& username, const std::string& email, const std::string& senha);

    std::string getUsername() const;
    std::string getEmail() const;
    std::string getSenha() const;

    void exibirDetalhes() const;

private:
    std::string username;
    std::string email;
    std::string senha;
};

#endif // USUARIO_H

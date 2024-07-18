#ifndef INTERFACE_H
#define INTERFACE_H

#include <string>
#include <vector>
#include "usuario.h"
#include "projeto.h"
#include "tarefa.h"

class Interface {
public:
    Interface(const std::string& username, const std::string& email, const std::string& senha)
        : usuario(username, email, senha) {}

    void exibeInfos() const {
        // Implementar a lógica para exibir informações aqui
        std::cout << "Usuário: " << usuario.getUsername() << " - " << usuario.getEmail() << std::endl;
    }

    void adicionarProjeto(const std::string& titulo) {
        projetos.emplace_back(titulo);
    }

    void adicionarTarefa(const std::string& titulo) {
        tarefas.emplace_back(titulo);
    }

    void exibirProjetos() const {
        for (const auto& projeto : projetos) {
            projeto.exibirDetalhes();
        }
    }

    void exibirTarefas() const {
        for (const auto& tarefa : tarefas) {
            tarefa.exibirDetalhes();
        }
    }

private:
    Usuario usuario;
    std::vector<Projeto> projetos;
    std::vector<Tarefa> tarefas;
};

#endif // INTERFACE_H

#include <iostream>
#include <vector>
#include "usuario.h"
#include "projeto.h"
#include "tarefa.h"

int main() {
    std::vector<Atividade*> atividades;
    Usuario usuario("user1", "user1@example.com", "password");

    while (true) {
        std::cout << "Selecione uma ação:" << std::endl;
        std::cout << "1. Criar projeto" << std::endl;
        std::cout << "2. Mostrar projetos" << std::endl;
        std::cout << "3. Criar tarefas" << std::endl;
        std::cout << "4. Mostrar tarefas" << std::endl;
        std::cout << "5. Sair" << std::endl;
        int escolha;
        std::cin >> escolha;

        try {
            if (escolha == 1) {
                // Código para criar projeto
            } else if (escolha == 2) {
                // Código para mostrar projetos
            } else if (escolha == 3) {
                // Código para criar tarefas
            } else if (escolha == 4) {
                std::cout << "Atividades disponíveis:" << std::endl;
                for (const auto& atividade : atividades) {
                    atividade->exibirDetalhes();
                }
            } else if (escolha == 5) {
                for (auto& atividade : atividades) {
                    delete atividade;
                }
                atividades.clear();
                break;
            } else {
                std::cerr << "Opção inválida. Tente novamente." << std::endl;
            }
        } catch (const std::exception& e) {
            std::cerr << "Erro: " << e.what() << std::endl;
        }
    }

    return 0;
}
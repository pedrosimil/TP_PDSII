#ifndef PROJETO_H
#define PROJETO_H

#include <string>
#include <vector>
#include "tarefa.h"

class Projeto {
public:
    Projeto(const std::string& titulo, int numero);

    void criarProjeto(const std::string& titulo, int numero);
    void excluirProjeto();
    void editarProjeto(const std::string& novoTitulo);

    void adicionarTarefa(Tarefa* tarefa);
    void removerTarefa(int numeroTarefa);

    void exibirDetalhes() const;

private:
    std::string titulo;
    std::vector<Tarefa*> tasks;
    int numero;
};

#endif // PROJETO_H

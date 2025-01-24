#ifndef TAREFA_H
#define TAREFA_H

#include <string>
#include "data.h" // Ajuste o caminho conforme necessário

class Tarefa {
public:
    Tarefa(const std::string& titulo, const std::string& descricao, const Data& data, int numeroTarefa);
    ~Tarefa();

    void editar(const std::string& novoTitulo, const std::string& novaDescricao, const Data& novaData);
    void exibirDetalhes() const;

private:
    std::string titulo;
    std::string descricao;
    Data data;
    int numeroTarefa;
};

#endif // TAREFA_H

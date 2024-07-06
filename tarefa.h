#ifndef TAREFA_H
#define TAREFA_H

#include "atividade.h"

// Definição da classe Tarefa, que herda da classe base Atividade
class Tarefa : public Atividade {
public:
    // Construtor da classe Tarefa 
    Tarefa(const std::string& titulo);
    Tarefa(const std::string& titulo, const std::string& descricao, const std::string& data);

    // Destrutor virtual da classe Tarefa (override da classe base)
    ~Tarefa() override;

    // Método para exibir detalhes da tarefa (override da classe base)
    void exibirDetalhes() const override;

    // Método para editar os atributos da tarefa (título, descrição, data)
    void editar(const std::string& novoTitulo, const std::string& novaDescricao, const std::string& novaData);

private:
    // Variáveis de membro privadas para armazenar descrição e data da tarefa
    std::string descricao;
    std::string data;
};
#endif

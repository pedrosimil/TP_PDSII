#ifndef ATIVIDADE_H
#define ATIVIDADE_H

#include <string>

class Atividade {
public:
    Atividade(const std::string& titulo);
    virtual ~Atividade();  // Destrutor virtual para liberação de memorias
    virtual void exibirDetalhes() const = 0;  // Método virtual puro para forçar implementação nas classes derivadas

   // virtual void excluir();
    virtual void setTitulo(const std::string& novoTitulo);

    std::string getTitulo() const;

private:
    std::string titulo;
};

#endif

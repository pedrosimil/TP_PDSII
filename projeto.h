#include <iostream>    
#include "atividade.h" 
#include <vector>      


class Projeto : public Atividade {
public:
    
    Projeto(const std::string& titulo);

   
    virtual ~Projeto();

    // Método para adicionar uma atividade ao projeto
    void adicionarAtividade(Atividade* atividade);

    // Método para exibir detalhes do projeto (override da função virtual na classe base)
    void exibirDetalhes() const override;

    // Método virtual para excluir o projeto
    virtual void excluir();

private:
    // Vetor de ponteiros para Atividade para armazenar as atividades associadas ao projeto
    std::vector<Atividade*> atividades;
};

#endif

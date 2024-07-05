# TP_PDSII
# Sistema de Gerenciamento de Projetos - Agiliza

## Integrantes do grupo:
- Pedro Henrique de Souza Santos Simil

- ##  Apresentação do Projeto:
O presente projeto tem o objetivo de desenvolver um sistema que auxilie os usuários na criação, organização e gerenciamento de projetos e tarefas, com um funcionamento semelhante ao Trello/Notion. Um dos maiores desafios das pessoas nos últimos anos é a organização de todas as tarefas do seu dia a dia, seja atividades pessoais ou profissionais. Nesse sentido, o projeto foi criado como uma forma  de auxiliar estudantes, equipes de trabalho e qualquer indivíduo que deseja melhorar a produtividade e a organização de suas atividades.

## Visão Geral da Solução:
Sendo assim, o sistema Spock facilitará a vida de seus usuários permitindo que eles criem projetos, adicionem tarefas a esses projetos e mantenham o controle sobre o progresso de suas atividades de forma intuitiva e eficiente.

## Estrutura do Projeto:
O projeto será organizado em várias classes, cada uma com suas responsabilidades específicas. Abaixo, descrevemos as principais classes e suas funcionalidades.

## Funcionalidades:
- O sistema deve ser capaz de adicionar um novo usuário e permitir que ele consiga logar a partir do email e senha
- O usuário pode criar um novo projeto e adicionar tarefas a serem feitas nesse projeto
 
Classe Projetos()
  -  Atributos
       titulo(string): titulo do projeto
       tasks (vector<task>): tarefas dentro do projeto
       numero (int): numero para identificação do projeto
     
  - Métodos
          criarProjeto()
          excluirProjeto()
          editarProjeto()

Classe Tarefas()
-Atributos
          título (string): titulo da tarefa
          descrição (string): descrição detalhada da tarefa
          numero_tarefa (int): numero para identificação da tarefa
          Data (Data): Data de vencimento da tarefa
          projeto(Projeto): Projeto ao qual a tarefa pertence

- Métodos
     criarUsuario(): permite que novos usuário sejam registrados no sistema
     excluirUsuário(): permite a exclusão
     login(): permite que usuário faça login no sistema com o nome e a senha

Classe Interface()
- Atributos
       Tarefas (vector<task>): tarefas associado ao usuário
       Projetos (vector<Project>): projetos associados ao usuário
       Usuario (vector<username>): dados associados ao usuário

- Métodos
        ExibirInfo(): exibe as informações dos projetos e tarefas associados ao usuário.


## Pré-Requisitos:
Compilador C++
Sistema Operacional compatível com C++

## Instruções de instalação:
- Clone o repositório: ``
- Navegue até o diretório do projeto: cd TP-pds2
- compile o código-fonte: `g++ -o gerenciador-tarefas main.cpp`
- Execute o programa: `/.gerenciador-tarefas`

## Instruções de Uso
1-Primeiro o usuário será direcionado para a página de criar um login, no qual ele vai criar um login e uma senha;
2-Assim que o login for criado, o usuário será direcionado para a página de efetuar login e, se a autenticação for válida, a página de projetos será aberta;
3-Na página de projetos o usuário terá a opção de excluir, editar e criar um projeto. Além disso, caso ele selecione um projeto, as tarefas serão abertas;
4-Na página de tarefas, o usuário poderá, assim como projetos, excluir, criar ou editar uma tarefa.

## Principais Dificuldades:
- À medida que o projeto avançou, podemos verificar que surgiram alguns desafios relacionados à implementação de recursos avançados que não tivemos muito contato, como por exemplo, a implementação de uma interface gráfica para que a interação do usuário com o nosso projeto, fosse da melhor maneira possível. E além disso, tivemos que pensar na melhor maneira de guarda as informações e dados importantes para que o nosso sistema funcione.
  


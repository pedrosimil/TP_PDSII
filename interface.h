#ifndef INTERFACE_H
#define INTERFACE_H

#include "usuario.h"
#include "projeto.h"
#include "tarefa.h"

class Interface : public Usuario, public Projeto, public Tarefa {
public:
    Interface(string username, string email) : Usuario(username, email);

        
        void exibeInfos() const;

    
};


#endif

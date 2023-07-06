#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"
#include <string>
#include <iostream>

class Cliente : public Pessoa {
private:
    std::string profissao;
    // Outros atributos específicos do Cliente

public:
    Cliente(const std::string& nome, const std::string& cpf, const std::string& endereco,
            const std::string& telefone, const std::string& email, const std::string& profissao);
    ~Cliente();
    // Getters e Setters
    std::string getProfissao() const;
    void setProfissao(const std::string& profissao);
    // Outros métodos específicos do Cliente
};

#endif

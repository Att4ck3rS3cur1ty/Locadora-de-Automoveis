#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"
#include <string>

class Funcionario : public Pessoa {
private:
    std::string cargo;
    float salario;

public:
    // Construtor
    Funcionario(const std::string& nome, const std::string& cpf, const std::string& endereco,
                const std::string& telefone, const std::string& email, const std::string& cargo,
                float salario);
    Funcionario();
    // Destrutor
    ~Funcionario();

    // Getters e Setters
    std::string getCargo() const;
    void setCargo(const std::string& cargo);
    float getSalario() const;
    void setSalario(float salario);
};

#endif

#ifndef LOCACAO_H
#define LOCACAO_H

#include "Veiculo.h"
#include "Cliente.h"
#include <iostream>

class Locacao {
private:
    Veiculo* veiculo;
    Cliente* cliente;
    int id;
    // Outros atributos da locação

public:
    // Construtor
    Locacao(Veiculo* veiculo, Cliente* cliente);

    // Destrutor
    ~Locacao();
    
    // Getters e Setters
    Veiculo* getVeiculo() const;
    void setVeiculo(Veiculo* veiculo);
    Cliente* getCliente() const;
    void setCliente(Cliente* cliente);
    int getId();
    // Outros métodos da locação
};

#endif

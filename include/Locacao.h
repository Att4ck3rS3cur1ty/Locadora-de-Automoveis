#ifndef LOCACAO_H
#define LOCACAO_H

#include "Veiculo.h"
#include "Cliente.h"
#include <iostream>

class Locacao {
private:
    Veiculo* veiculo;
    Cliente* cliente;
    // Outros atributos da locação

public:
    Locacao(Veiculo* veiculo, Cliente* cliente);
    
    // Getters e Setters
    Veiculo* getVeiculo() const;
    void setVeiculo(Veiculo* veiculo);
    Cliente* getCliente() const;
    void setCliente(Cliente* cliente);
    // Outros métodos da locação
};

#endif
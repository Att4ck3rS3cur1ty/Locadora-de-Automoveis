#ifndef LOCADORA_H
#define LOCADORA_H

#include "Funcionario.h"
#include "Cliente.h"
#include "Veiculo.h"
#include "Locacao.h"
#include <vector>

class Locadora {
private:
    std::vector<Funcionario*> funcionarios;
    std::vector<Cliente*> clientes;
    std::vector<Veiculo*> veiculos;
    std::vector<Locacao*> locacoes;

public:
    void adicionarFuncionario(Funcionario* funcionario);
    void removerFuncionario(Funcionario* funcionario);
    void adicionarCliente(Cliente* cliente);
    void removerCliente(Cliente* cliente);
    void adicionarVeiculo(Veiculo* veiculo);
    void removerVeiculo(Veiculo* veiculo);
    void realizarLocacao(Veiculo* veiculo, Cliente* cliente);
    void encerrarLocacao(Locacao* locacao);
    void listarFuncionarios();
    void listarClientes();
    void listarVeiculos();
    void listarLocacoes();
};

#endif

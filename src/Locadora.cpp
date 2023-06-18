#include "Locadora.h"
#include <iostream>

void Locadora::adicionarFuncionario(Funcionario* funcionario) {
    funcionarios.push_back(funcionario);
}

void Locadora::removerFuncionario(Funcionario* funcionario) {
    // Remover funcionário da lista de funcionários
}

void Locadora::adicionarCliente(Cliente* cliente) {
    clientes.push_back(cliente);
}

void Locadora::removerCliente(Cliente* cliente) {
    // Remover cliente da lista de clientes
}

void Locadora::adicionarVeiculo(Veiculo* veiculo) {
    veiculos.push_back(veiculo);
}

void Locadora::removerVeiculo(Veiculo* veiculo) {
    // Remover veículo da lista de veículos
}

void Locadora::realizarLocacao(Veiculo* veiculo, Cliente* cliente) {
    // Criar uma nova locação e adicionar à lista de locações
}

void Locadora::encerrarLocacao(Locacao* locacao) {
    // Remover locação da lista de locações
}

void Locadora::listarFuncionarios() {
    // Listar funcionários
}

void Locadora::listarClientes() {
    // Listar clientes
}

void Locadora::listarVeiculos() {
    // Listar veículos
}

void Locadora::listarLocacoes() {
    // Listar locações
}

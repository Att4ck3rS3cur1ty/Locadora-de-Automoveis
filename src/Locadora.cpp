#include "Locadora.h"
#include <iostream>

Locadora::Locadora(std::vector<Funcionario*> funcionarios, std::vector<Cliente*> clientes,
    std::vector<Veiculo*> veiculos, std::vector<Locacao*> locacoes, HistoricoLocacoes historicoLocacoes,
    Fila<int> filaReservas)
    : funcionarios(funcionarios), clientes(clientes), veiculos(veiculos), locacoes(locacoes),
    historicoLocacoes(historicoLocacoes), filaReservas(filaReservas) {}
    

void Locadora::adicionarFuncionario(Funcionario* funcionario) {
    funcionarios.push_back(funcionario);
}

void Locadora::removerFuncionario(Funcionario* funcionario) {
    // Encontre o funcionário na lista de funcionários e remova-o
    for (auto it = funcionarios.begin(); it != funcionarios.end(); ++it) {
        if (*it == funcionario) {
            funcionarios.erase(it);
            break;
        }
    }
}

void Locadora::adicionarCliente(Cliente* cliente) {
    clientes.push_back(cliente);
}

void Locadora::removerCliente(Cliente* cliente) {
    // Encontre o cliente na lista de clientes e remova-o
    for (auto it = clientes.begin(); it != clientes.end(); ++it) {
        if (*it == cliente) {
            clientes.erase(it);
            break;
        }
    }
}

void Locadora::adicionarVeiculo(Veiculo* veiculo) {
    veiculos.push_back(veiculo);
}

void Locadora::removerVeiculo(Veiculo* veiculo) {
    // Encontre o veículo na lista de veículos e remova-o
    for (auto it = veiculos.begin(); it != veiculos.end(); ++it) {
        if (*it == veiculo) {
            veiculos.erase(it);
            break;
        }
    }
}

void Locadora::realizarLocacao(Veiculo* veiculo, Cliente* cliente) {
    // Criar uma nova locação e adicionar à lista de locações
    Locacao* novaLocacao = new Locacao(veiculo, cliente);
    locacoes.push_back(novaLocacao);
}

void Locadora::encerrarLocacao(Locacao* locacao) {
    // Adicionar a locação ao histórico de locações
    historicoLocacoes.adicionarLocacao(locacao->getId());

    // Remover a locação do vetor de locações
    for (auto it = locacoes.begin(); it != locacoes.end(); ++it) {
        if (*it == locacao) {
            locacoes.erase(it);
            break;
        }
    }
}

void Locadora::listarFuncionarios() {
    std::cout << "Lista de Funcionários:" << std::endl;
    for (auto funcionario : funcionarios) {
        std::cout << "Nome: " << funcionario->getNome() << ", CPF: " << funcionario->Pessoa::getCpf() << std::endl;
    }
}

void Locadora::listarClientes() {
    std::cout << "Lista de Clientes:" << std::endl;
    for (auto cliente : clientes) {
        std::cout << "Nome: " << cliente->getNome() << ", CPF: " << cliente->Pessoa::getCpf() << std::endl;
    }
}

void Locadora::listarVeiculos() {
    std::cout << "Lista de Veículos:" << std::endl;
    for (auto veiculo : veiculos) {
        std::cout << "Placa: " << veiculo->getPlaca() << ", Modelo: " << veiculo->getModelo() << std::endl;
    }
}

void Locadora::listarLocacoes() {
    std::cout << "Lista de Locações:" << std::endl;
    for (auto locacao : locacoes) {
        std::cout << "ID da Locação: " << locacao->getId() << std::endl;
        std::cout << "Cliente: " << locacao->getCliente()->getNome() << std::endl;
        std::cout << "Veículo: " << locacao->getVeiculo()->getModelo() << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
}

void Locadora::adicionarReserva(int idReserva) {
    filaReservas.enqueue(idReserva);
}

int Locadora::obterProximaReserva() {
    return filaReservas.dequeue();
}

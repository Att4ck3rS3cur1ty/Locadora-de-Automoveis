#include "Locadora.h"
#include <iostream>

void Locadora::adicionarFuncionario(Funcionario* funcionario) {
    funcionarios.push_back(funcionario);
}

void Locadora::removerFuncionario(Funcionario* funcionario) {
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
    for (auto it = veiculos.begin(); it != veiculos.end(); ++it) {
        if (*it == veiculo) {
            veiculos.erase(it);
            break;
        }
    }
}

void Locadora::realizarLocacao(Veiculo* veiculo, Cliente* cliente) {
    Locacao locacao(veiculo, cliente);
    locacoes.push_back(locacao);
}

void Locadora::encerrarLocacao(Locacao* locacao) {
    for (auto it = locacoes.begin(); it != locacoes.end(); ++it) {
        if (&(*it) == locacao) {
            locacoes.erase(it);
            break;
        }
    }
}

void Locadora::listarFuncionarios() {
    for (const auto& funcionario : funcionarios) {
        std::cout << funcionario->getNome() << " - " << funcionario->getCargo() << std::endl;
    }
}

void Locadora::listarClientes() {
    for (const auto& cliente : clientes) {
        std::cout << cliente->getNome() << " - " << cliente->getCpf() << std::endl;
    }
}

void Locadora::listarVeiculos() {
    for (const auto& veiculo : veiculos) {
        std::cout << veiculo->getMarca() << " - " << veiculo->getModelo() << std::endl;
    }
}

void Locadora::listarLocacoes() {
    for (const auto& locacao : locacoes) {
        std::cout << locacao.getVeiculo()->getMarca() << " - " << locacao.getCliente()->getNome() << std::endl;
    }
}

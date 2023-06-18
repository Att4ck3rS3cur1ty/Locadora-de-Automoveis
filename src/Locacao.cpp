#include "Locacao.h"

Locacao::Locacao(Veiculo* veiculo, Cliente* cliente)
    : veiculo(veiculo), cliente(cliente) {}

Veiculo* Locacao::getVeiculo() const {
    return veiculo;
}

void Locacao::setVeiculo(Veiculo* veiculo) {
    this->veiculo = veiculo;
}

Cliente* Locacao::getCliente() const {
    return cliente;
}

void Locacao::setCliente(Cliente* cliente) {
    this->cliente = cliente;
}

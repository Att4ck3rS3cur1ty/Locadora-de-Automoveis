#include "Veiculo.h"

Veiculo::Veiculo(const std::string& placa, const std::string& modelo, const std::string& marca,
                 int ano, const std::string& cor, float quilometragem)
    : placa(placa), modelo(modelo), marca(marca), ano(ano), cor(cor), quilometragem(quilometragem),
      disponivel(true) {}

std::string Veiculo::getPlaca() const {
    return placa;
}

std::string Veiculo::getModelo() const {
    return modelo;
}

std::string Veiculo::getMarca() const {
    return marca;
}

int Veiculo::getAno() const {
    return ano;
}

std::string Veiculo::getCor() const {
    return cor;
}

float Veiculo::getQuilometragem() const {
    return quilometragem;
}

bool Veiculo::isDisponivel() const {
    return disponivel;
}

void Veiculo::setModelo(const std::string& modelo) {
    this->modelo = modelo;
}

void Veiculo::setMarca(const std::string& marca) {
    this->marca = marca;
}

void Veiculo::setAno(int ano) {
    this->ano = ano;
}

void Veiculo::setCor(const std::string& cor) {
    this->cor = cor;
}

void Veiculo::setQuilometragem(float quilometragem) {
    this->quilometragem = quilometragem;
}

void Veiculo::setDisponivel(bool disponivel) {
    this->disponivel = disponivel;
}

bool Veiculo::verificarDisponibilidade() const {
    return disponivel;
}

void Veiculo::atualizarQuilometragem(float quilometragem) {
    this->quilometragem = quilometragem;
}

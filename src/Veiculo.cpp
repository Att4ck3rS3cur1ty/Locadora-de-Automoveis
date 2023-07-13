#include "Veiculo.h"

Veiculo::Veiculo(const std::string& placa, const std::string& modelo, const std::string& marca,
                 int ano, const std::string& cor, float quilometragem)
    : placa(placa), modelo(modelo), marca(marca), ano(ano), cor(cor), quilometragem(quilometragem),
      disponivel(true) {}

Veiculo::~Veiculo(){
    
}

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

float Veiculo::getValorLocacao(){
    return valor_locacao;
}

std::string Veiculo::getCor() const {
    return cor;
}

float Veiculo::getQuilometragem() {
    return quilometragem;
}

bool Veiculo::getDisponibilidade() {
    return disponivel;
}

void Veiculo::setPlaca(const std::string& placa) {
    this->placa = placa;
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

void Veiculo::setValorLocacao(int valor_locacao){
    this->valor_locacao = valor_locacao;
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

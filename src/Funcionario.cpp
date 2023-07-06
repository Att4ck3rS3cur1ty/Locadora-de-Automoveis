#include "Funcionario.h"

Funcionario::Funcionario(const std::string& nome, const std::string& cpf, const std::string& endereco,
                         const std::string& telefone, const std::string& email, const std::string& cargo,
                         float salario)
    : Pessoa(nome, cpf, endereco, telefone, email), cargo(cargo), salario(salario) {}

Funcionario::~Funcionario(){

}

std::string Funcionario::getCargo() const {
    return cargo;
}

void Funcionario::setCargo(const std::string& cargo) {
    this->cargo = cargo;
}

float Funcionario::getSalario() const {
    return salario;
}

void Funcionario::setSalario(float salario) {
    this->salario = salario;
}

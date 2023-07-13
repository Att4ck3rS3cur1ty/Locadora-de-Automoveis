#include "Pessoa.h"

Pessoa::Pessoa(const std::string& nome, const std::string& cpf, const std::string& endereco,
               const std::string& telefone, const std::string& email)
    : nome(nome), cpf(cpf), endereco(endereco), telefone(telefone), email(email) {}

Pessoa::Pessoa(){

}

Pessoa::~Pessoa(){

}

std::string Pessoa::getNome() const {
    return nome;
}

void Pessoa::setNome(const std::string& nome) {
    this->nome = nome;
}

std::string Pessoa::getCpf() const {
    return cpf;
}

void Pessoa::setCPF(const std::string& cpf) {
    this->cpf = cpf;
}

std::string Pessoa::getEndereco() const {
    return endereco;
}

void Pessoa::setEndereco(const std::string& endereco) {
    this->endereco = endereco;
}

std::string Pessoa::getTelefone() const {
    return telefone;
}

void Pessoa::setTelefone(const std::string& telefone) {
    this->telefone = telefone;
}

std::string Pessoa::getEmail() const {
    return email;
}

void Pessoa::setEmail(const std::string& email) {
    this->email = email;
}

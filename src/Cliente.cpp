#include "Cliente.h"

Cliente::Cliente(const std::string& nome, const std::string& cpf, const std::string& endereco,
                 const std::string& telefone, const std::string& email, const std::string& profissao)
    : Pessoa(nome, cpf, endereco, telefone, email), profissao(profissao) {}

Cliente::~Cliente(){

}

std::string Cliente::getProfissao() const {
    return profissao;
}

void Cliente::setProfissao(const std::string& profissao) {
    this->profissao = profissao;
}

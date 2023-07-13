#include "Funcionario.h"
#include <iostream>
#include <fstream>
#include <string>

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

void salvarDados(const std::string& caminho_arquivo){
    std::ofstream arquivo_stream(caminho_arquivo);
    bool stop_reading = false;

    arquivo_stream.open(caminho_arquivo);

     if(arquivo_stream.fail()){
        std::cerr << "Erro ao abrir o arquivo " << caminho_arquivo << std::endl;
        return;
    }

    std::cout << "Inserindo dados..." << std::endl;
    Funcionario* funcionario;
    std::string str_aux;
    float flt_aux;
    char chr_aux;
    while (!stop_reading)
    {
        std::cout << "========= Funcionário =========" << std::endl;
        std::cout << "Nome: " << std::endl;
        std::cin >> str_aux;
        funcionario->setNome(str_aux);
        arquivo_stream << funcionario->getNome() << ",";

        std::cout << "CPF: " << std::endl;
        std::cin >> str_aux;
        funcionario->setCPF(str_aux);
        arquivo_stream << funcionario->getCpf() << ",";
    
        std::cout << "Endereço: " << std::endl;
        std::cin >> str_aux;
        funcionario->setEndereco(str_aux);
        arquivo_stream << funcionario->getEndereco() << ",";

        std::cout << "Telefone: " << std::endl;
        std::cin >> str_aux;
        funcionario->setTelefone(str_aux);
        arquivo_stream << funcionario->getTelefone() << ",";

        std::cout << "Email: " << std::endl;
        std::cin >> str_aux;
        funcionario->setEmail(str_aux);
        arquivo_stream << funcionario->getEmail() << ",";  

        std::cout << "Cargo: " << std::endl;
        std::cin >> str_aux;
        funcionario->setCargo(str_aux);
        arquivo_stream << funcionario->getCargo() << ",";

        std::cout << "Salario: " << std::endl;
        std::cin >> flt_aux;
        funcionario->setSalario(flt_aux);
        arquivo_stream << funcionario->getSalario();

        std::cout << "Deseja adicionar mais um funcionário? S ou N" << std::endl;
        std::cin >> chr_aux;

        if (chr_aux == 'N' || chr_aux == 'n')
        {
            stop_reading = true;
        }
    }
}

void Funcionario::carregarDados(const std::string& caminho_arquivo) {
    std::ifstream arquivo_stream(caminho_arquivo);

    arquivo_stream.open(caminho_arquivo);

     if(arquivo_stream.fail()){
        std::cerr << "Erro ao abrir o arquivo " << caminho_arquivo << std::endl;
        return;
    }

    while (arquivo_stream.peek()!=EOF)
    {
        std::string dados;
        getline(arquivo_stream, dados, ',');
        std::cout << dados << std::endl;
    }

    arquivo_stream.close();
}

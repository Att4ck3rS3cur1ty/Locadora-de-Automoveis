#include "Locadora.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Funcionario.h"
#include "Cliente.h"
#include "Veiculo.h"
#include "Locacao.h"
#include "Fila.h"

Locadora::Locadora(std::vector<Funcionario*> funcionarios, std::vector<Cliente*> clientes,
    std::vector<Veiculo*> veiculos)
    : funcionarios(funcionarios), clientes(clientes), veiculos(veiculos), locacoes(locacoes),
    historicoLocacoes(historicoLocacoes), filaReservas(filaReservas) {}
    
Locadora::Locadora(){}

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

void Locadora::salvarDados(const std::string& caminho_arquivo){
    std::ofstream arquivo_stream(caminho_arquivo);
    bool stop_all = false;

    arquivo_stream.open(caminho_arquivo);

     if(arquivo_stream.fail()){
        std::cerr << "Erro ao abrir o arquivo " << caminho_arquivo << std::endl;
        return;
    }

    std::cout << "Inserindo dados..." << std::endl;
    Funcionario* funcionario;
    Cliente* cliente;
    Veiculo* veiculo;

    std::string str_aux;
    float flt_aux;
    char chr_aux;
    int int_aux;

    bool stop_reading;

    while (!stop_all)
    {
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

        stop_reading = false;

        while (!stop_reading)
        {        
            std::cout << "========= Cliente =========" << std::endl;
            std::cout << "Nome: " << std::endl;
            std::cin >> str_aux;
            cliente->setNome(str_aux);
            arquivo_stream << cliente->getNome() << ",";

            std::cout << "CPF: " << std::endl;
            std::cin >> str_aux;
            cliente->setCPF(str_aux);
            arquivo_stream << cliente->getCpf() << ",";

            std::cout << "Endereço: " << std::endl;
            std::cin >> str_aux;
            cliente->setEndereco(str_aux);
            arquivo_stream << cliente->getEndereco() << ",";

            std::cout << "Telefone: " << std::endl;
            std::cin >> str_aux;
            cliente->setTelefone(str_aux);
            arquivo_stream << cliente->getTelefone() << ",";

            std::cout << "Email: " << std::endl;
            std::cin >> str_aux;
            cliente->setEmail(str_aux);
            arquivo_stream << cliente->getEmail() << ",";  

            std::cout << "Profissão: " << std::endl;
            std::cin >> str_aux;
            cliente->setProfissao(str_aux);
            arquivo_stream << cliente->getProfissao() << ",";

            std::cout << "Deseja adicionar mais um cliente? S ou N" << std::endl;
            std::cin >> chr_aux;

            if (chr_aux == 'N' || chr_aux == 'n')
            {
                stop_reading = true;
            }
        }
        
        stop_reading = false;

        while (!stop_reading)
        {        
            std::cout << "========= Veículo =========" << std::endl;
            std::cout << "Placa: " << std::endl;
            std::cin >> str_aux;
            veiculo->setPlaca(str_aux);
            arquivo_stream << veiculo->getPlaca() << ",";

            std::cout << "Modelo: " << std::endl;
            std::cin >> str_aux;
            veiculo->setModelo(str_aux);
            arquivo_stream << veiculo->getModelo() << ",";

            std::cout << "Marca: " << std::endl;
            std::cin >> str_aux;
            veiculo->setMarca(str_aux);
            arquivo_stream << veiculo->getMarca() << ",";

            std::cout << "Ano: " << std::endl;
            std::cin >> int_aux;
            veiculo->setAno(int_aux);
            arquivo_stream << veiculo->getAno() << ",";

            std::cout << "Cor: " << std::endl;
            std::cin >> str_aux;
            veiculo->setCor(str_aux);
            arquivo_stream << veiculo->getCor() << ",";  

            std::cout << "Quilometragem: " << std::endl;
            std::cin >> flt_aux;
            veiculo->setQuilometragem(flt_aux);
            arquivo_stream << veiculo->getQuilometragem() << ",";

            std::cout << "Deseja adicionar mais um veículo? S ou N" << std::endl;
            std::cin >> chr_aux;

            if (chr_aux == 'N' || chr_aux == 'n')
            {
                stop_reading = true;
            }
        }
        
        stop_reading = false;

        while (!stop_reading)
        {        
            std::cout << "========= Veículo =========" << std::endl;
            std::cout << "Placa: " << std::endl;
            std::cin >> str_aux;
            veiculo->setPlaca(str_aux);
            arquivo_stream << veiculo->getPlaca() << ",";

            std::cout << "Modelo: " << std::endl;
            std::cin >> str_aux;
            veiculo->setModelo(str_aux);
            arquivo_stream << veiculo->getModelo() << ",";

            std::cout << "Marca: " << std::endl;
            std::cin >> str_aux;
            veiculo->setMarca(str_aux);
            arquivo_stream << veiculo->getMarca() << ",";

            std::cout << "Ano: " << std::endl;
            std::cin >> int_aux;
            veiculo->setAno(int_aux);
            arquivo_stream << veiculo->getAno() << ",";

            std::cout << "Cor: " << std::endl;
            std::cin >> str_aux;
            veiculo->setCor(str_aux);
            arquivo_stream << veiculo->getCor() << ",";  

            std::cout << "Quilometragem: " << std::endl;
            std::cin >> flt_aux;
            veiculo->setQuilometragem(flt_aux);
            arquivo_stream << veiculo->getQuilometragem() << ",";

            std::cout << "Deseja adicionar mais um veículo? S ou N" << std::endl;
            std::cin >> chr_aux;

            if (chr_aux == 'N' || chr_aux == 'n')
            {
                stop_reading = true;
            }
        }
        
        stop_reading = false;
    }
}

void Locadora::carregarDados(const std::string& caminho_arquivo) {
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

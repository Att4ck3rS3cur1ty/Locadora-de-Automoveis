#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Locadora.h"

void Locadora::salvarDados(const std::string& nomeArquivo) {
    std::ofstream arquivo(nomeArquivo);

    if (arquivo.is_open()) {
        // Salvar os dados da locadora no arquivo

        // Exemplo: Salvando a lista de veículos
        arquivo << "Veiculos:" << std::endl;
        for (const auto veiculo : veiculos) {
            arquivo << "Placa: " << veiculo->getPlaca() << ", Modelo: " << veiculo->getModelo() << std::endl;
        }

        arquivo.close();
        std::cout << "Dados salvos com sucesso no arquivo " << nomeArquivo << std::endl;
    } else {
        std::cerr << "Erro ao abrir o arquivo " << nomeArquivo << " para escrita" << std::endl;
    }
}

void Locadora::limparDados() {
    funcionarios.clear();
    clientes.clear();
    veiculos.clear();
    locacoes.clear();
    historicoLocacoes.limparHistorico();
    filaReservas.limparFila();
}

void Locadora::carregarDados(const std::string& nomeArquivo) {
    std::ifstream arquivo(nomeArquivo);

    if (arquivo.is_open()) {
        // Carregar os dados da locadora a partir do arquivo

        // Exemplo: Carregando a lista de veículos
        std::string linha;
        while (std::getline(arquivo, linha)) {
            // Processar cada linha do arquivo
            // Exemplo: Extrair a placa e o modelo do veículo
            std::string placa, modelo;
            if (std::sscanf(linha.c_str(), "Placa: %s, Modelo: %s", placa.data(), modelo.data()) == 2) {
                Veiculo* veiculo = new Veiculo(placa, modelo);
                veiculos.push_back(veiculo);
            }
        }

        arquivo.close();
        std::cout << "Dados carregados com sucesso do arquivo " << nomeArquivo << std::endl;
    } else {
        std::cerr << "Erro ao abrir o arquivo " << nomeArquivo << " para leitura" << std::endl;
    }
}


int main(){
    // Locadora* loca_ = new Locadora();    
    Locadora locadora;

    locadora.salvarDados("../data/dados.txt");

    locadora.limparDados();

    locadora.carregarDados("../data/dados.txt");
    return 0;
}
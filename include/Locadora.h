#ifndef LOCADORA_H
#define LOCADORA_H

#include "Funcionario.h"
#include "Cliente.h"
#include "Veiculo.h"
#include "Locacao.h"
#include "HistoricoLocacoes.h"
#include "Fila.h"
#include <vector>

class Locadora {
private:
    std::vector<Funcionario*> funcionarios;
    std::vector<Cliente*> clientes;
    std::vector<Veiculo*> veiculos;
    std::vector<Locacao*> locacoes;
    HistoricoLocacoes historicoLocacoes;
    Fila<int> filaReservas;
    // std::queue<Locacao> filaEspera; // Fila de espera de locações


public:
    Locadora(std::vector<Funcionario*> funcionarios, std::vector<Cliente*> clientes,
    std::vector<Veiculo*> veiculos, std::vector<Locacao*> locacoes, HistoricoLocacoes historicoLocacoes,
    Fila<int> filaReservas);
    void adicionarFuncionario(Funcionario* funcionario);
    void removerFuncionario(Funcionario* funcionario);
    void adicionarCliente(Cliente* cliente);
    void removerCliente(Cliente* cliente);
    void adicionarVeiculo(Veiculo* veiculo);
    void removerVeiculo(Veiculo* veiculo);
    Locacao obterProximaLocacao();
    void adicionarReserva(int idReserva);
    int obterProximaReserva();
    void realizarLocacao(Veiculo* veiculo, Cliente* cliente);
    void encerrarLocacao(Locacao* locacao);
    void listarFuncionarios();
    void listarClientes();
    void listarVeiculos();
    void listarLocacoes();
    void limparDados();
    void salvarDados(const std::string& caminho_arquivo);
    void carregarDados(const std::string& caminho_arquivo);
};

#endif

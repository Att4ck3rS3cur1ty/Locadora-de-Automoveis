#ifndef VEICULO_H
#define VEICULO_H

#include <string>

class Veiculo {
private:
    std::string placa;
    std::string modelo;
    std::string marca;
    std::string cor;
    int ano;
    float valor_locacao;
    float quilometragem;
    bool disponivel;

public:
    Veiculo(const std::string& placa, const std::string& modelo, const std::string& marca,
            int ano, const std::string& cor, float quilometragem);
    ~Veiculo();
    
    std::string getPlaca() const;
    std::string getModelo() const;
    std::string getMarca() const;
    std::string getCor() const;
    int getAno() const;
    float getValorLocacao();
    float getQuilometragem();
    bool getDisponibilidade();

    void setPlaca(const std::string& placa);
    void setModelo(const std::string& modelo);
    void setMarca(const std::string& marca);
    void setAno(int ano);
    void setValorLocacao(int valor_locacao);
    void setCor(const std::string& cor);
    void setQuilometragem(float quilometragem);
    void setDisponivel(bool disponivel);

    bool verificarDisponibilidade() const;
    void atualizarQuilometragem(float quilometragem);
};

#endif

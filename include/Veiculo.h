#ifndef VEICULO_H
#define VEICULO_H

#include <string>

class Veiculo {
private:
    std::string placa;
    std::string modelo;
    std::string marca;
    int ano;
    std::string cor;
    float quilometragem;
    bool disponivel;

public:
    Veiculo(const std::string& placa, const std::string& modelo, const std::string& marca,
            int ano, const std::string& cor, float quilometragem);
    ~Veiculo();
    
    std::string getPlaca() const;
    std::string getModelo() const;
    std::string getMarca() const;
    int getAno() const;
    std::string getCor() const;
    float getQuilometragem() const;
    bool isDisponivel() const;

    void setModelo(const std::string& modelo);
    void setMarca(const std::string& marca);
    void setAno(int ano);
    void setCor(const std::string& cor);
    void setQuilometragem(float quilometragem);
    void setDisponivel(bool disponivel);

    bool verificarDisponibilidade() const;
    void atualizarQuilometragem(float quilometragem);
};

#endif

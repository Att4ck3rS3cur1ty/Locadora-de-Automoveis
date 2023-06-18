#include <iostream>

class Veiculo{
    private:
        int id;
        std::string modelo;
        std::string marca;
        int ano;
        std::string placa;
        std::string cor;
        float quilometragem;
        int capacidade_passageiros;
        std::string tipo_combustivel;
    public:
        Veiculo();
        Veiculo(int id, std::string modelo, std::string marca, 
        int ano, std::string placa, std::string cor, float quilometragem,
        int capacidade_passageiros, std::string tipo_combustivel);
        ~Veiculo();

        int getId();
        int setId(int i);

        std::string getModelo();
        std::string setModelo(std::string m);

        int getAno();
        int setAno(int a);

        std::string getPlaca();
        std::string setPlaca(std::string p);

        std::string getCor();
        std::string setCor(std::string c);

        float getQuilometragem();
        float setQuilometragem(float q);

        int getCapacidadePassageiros();
        int setCapacidadePassageiros(int c);

        std::string getTipoCombustivel();
        std::string setTipoCombustivel(std::string t);
};

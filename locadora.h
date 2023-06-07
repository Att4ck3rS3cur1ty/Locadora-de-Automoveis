#include <iostream>

class Pessoa{
    private:
        std::string data_nascimento;
        std::string email;
        std::string endereco;
        std::string nome;
        std::string numero_telefone;
    public:
        Pessoa(std::string data_nasc, std::string nome);

        std::string getDataNascimento();
        std::string setDataNascimento(std::string d);

        std::string getEmail();
        std::string setEmail(std::string e);

        std::string getEndereco();
        std::string setEndereco(std::string e);

        std::string getNome();
        std::string setNome(std::string n);

        std::string getNumeroTelefone();
        std::string setNumeroTelefone(std::string n);
};
class Cliente : Pessoa{

};

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

class CategoriaVeiculo : Veiculo{

};

class Reserva{

};

class Filial{

};

class Funcionario : Pessoa{

};

class AgenteAtendimento : Pessoa{

};

class Seguro{

};

class Pagamento{

};

class Manutencao{

};

class Promocao{

};

class HistoricoAlguel : Cliente{

};
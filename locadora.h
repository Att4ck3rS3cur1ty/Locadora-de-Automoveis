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
    private:
        int id;
        std::string nome_seguro;
        std::string descricao;
        float preco;
    public:
        Seguro();
        Seguro(int id, std::string nome_seguro,
        std::string descricao, float preco);

        int getId();
        int setId(int i);

        std::string getNomeSeguro();
        std::string setNomeSeguro(std::string n);

        std::string getDescricao();
        std::string setDescricao(std::string d);

        float getPreco();
        float setPreco(float p);
};

class Pagamento{

};

class Manutencao{

};

class Promocao{
    private:
        int id;
        std::string nome_promocao;
        std::string descricao_promocao;
        std::string data_inicio;
        std::string data_termino;
    public:
        Promocao();
        Promocao(int id, std::string nome_promocao, std::string descricao_promocao,
        std::string data_inicio, std::string data_termino);

        int getId();
        int setId(int i);

        std::string getNomePromocao();
        std::string setNomePromocao(std::string n);

        std::string getDescricaoPromocao();
        std::string setDescricaoPromocao(std::string d);

        std::string getDataInicio();
        std::string setDataInicio(std::string d);

        std::string getDataTermino();
        std::string getDataTermino(std::string d);
};

class HistoricoAlguel : Cliente{

};
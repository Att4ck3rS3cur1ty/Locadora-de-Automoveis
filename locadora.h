#include <iostream>

class Pessoa{
    private:
        std::string data_nascimento;
        std::string email;
        std::string endereco;
        std::string numero_telefone;
    public:
        std::string nome;
};
class Cliente : Pessoa{

};

class Veiculo{

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
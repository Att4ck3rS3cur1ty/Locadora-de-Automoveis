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
        ~Pessoa();

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
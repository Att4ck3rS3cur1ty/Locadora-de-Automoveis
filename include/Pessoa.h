#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
private:
    std::string nome;
    std::string cpf;
    std::string endereco;
    std::string telefone;
    std::string email;

public:
    // Construtor
    Pessoa(const std::string& nome, const std::string& cpf, const std::string& endereco,
           const std::string& telefone, const std::string& email);
    
    // Destrutor
    ~Pessoa();

    // Getters e Setters
    std::string getNome() const;
    void setNome(const std::string& nome);
    std::string getCpf() const;
    void setCPF(const std::string& cpf);
    std::string getEndereco() const;
    void setEndereco(const std::string& endereco);
    std::string getTelefone() const;
    void setTelefone(const std::string& telefone);
    std::string getEmail() const;
    void setEmail(const std::string& email);
};

#endif

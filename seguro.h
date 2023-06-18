#ifndef SEGURO_H
#define SEGURO_H
#include <iostream>

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
        ~Seguro();

        int getId();
        int setId(int i);

        std::string getNomeSeguro();
        std::string setNomeSeguro(std::string n);

        std::string getDescricao();
        std::string setDescricao(std::string d);

        float getPreco();
        float setPreco(float p);
};

#endif
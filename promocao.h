#ifndef PROMOCAO_H
#define PROMOCAO_H
#include <iostream>

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
        ~Promocao();

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

#endif

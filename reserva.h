#ifndef RESERVA_H
#define RESERVA_H
#include <iostream>
#include "veiculo.h"
#include "cliente.h"


class Reserva{
    private:
        int id;
        std::string data_hora_inicio;
        std::string data_hora_termino;
        int veiculo_id;
        int cliente_id;
        float valor_total;
    public:
        Reserva(Veiculo veiculo_obj, Cliente client_obj);
        ~Reserva();

        int getId();
        int setId(int i);

        std::string getDataHoraInicio();
        std::string setDataHoraInicio(std::string d);

        std::string getDataHoraTermino();
        std::string setDataHoraTermino(std::string d);

        int getVeiculoId();

        int getClienteId();

        float getValorTotal();
        float setValorTotal(int v); 
};

#endif
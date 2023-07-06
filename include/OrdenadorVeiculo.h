// OrdenadorVeiculo.h

#ifndef ORDENADOR_H
#define ORDENADOR_H

#include <vector>
#include "Veiculo.h"

// Algoritimos de ordenação que serão utilizados para ordenar os veículos

class OrdenadorVeiculo {
public:
    static void bubbleSort(std::vector<Veiculo>& vetor);
    static void quickSort(std::vector<Veiculo>& vetor, int inicial, int final);
};

#endif

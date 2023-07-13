// OrdenadorVeiculo.h

#ifndef ORDENADOR_H
#define ORDENADOR_H

#include <vector>
#include "Veiculo.h"

// Algoritmos de ordenação que serão utilizados para ordenar os veículos

class OrdenadorVeiculo {
public:
    static void bubbleSort(std::vector<Veiculo>& vetor);
    static void quickSort(std::vector<Veiculo>& vetor, int begin, int end);
    static void mergeSort(std::vector<Veiculo>& vetor);
    static void merge(std::vector<Veiculo>& vetor, std::vector<Veiculo>& left_half, std::vector<Veiculo>& right_half);
};

#endif

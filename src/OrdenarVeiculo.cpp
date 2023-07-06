#include "OrdenadorVeiculo.h"

void OrdenadorVeiculo::bubbleSort(std::vector<Veiculo>& vetor){
    for (int i = vetor.size() - 1; i > 0; i--)
    {
        bool permutado = false;
        for (int j = 0; j < i; j++)
        {
            if (vetor[j].getAno() > vetor[j+1].getAno())
            {
                (vetor[j], vetor[j+1]) = (vetor[j+1], vetor[j]);
                permutado = true;
            }
        }
        // se nenhuma mudança for detectada no loop interno, encerra o loop
        if(!permutado){
            break;
        }   
    }
}
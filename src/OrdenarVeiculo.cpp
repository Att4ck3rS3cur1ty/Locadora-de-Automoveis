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

void OrdenadorVeiculo::quickSort(std::vector<Veiculo>& vetor, int inicial, int final){
    int pivot = vetor[inicial].getQuilometragem();
    int left = inicial;
    int right = final;

    while (left <= right)
    {
        // esquerda para direita
        while (vetor[left].getQuilometragem() < pivot)
        {
            // caminha da para direta
            left++;
        }

        // direita para esquerda
        while (vetor[right].getQuilometragem() > pivot)
        {
            // caminha para esquerda
            right--;
        }

        if (left <= right)
        {
            // permuta elementos e incrementa/decrementa LR
            (vetor[left], vetor[right]) = (vetor[right], vetor[left]);
            left++;
            right--;
        }
    }

    if (inicial < right)
    {
        quickSort(vetor, inicial, right);
    }

    if (left < final)
    {
        quickSort(vetor, left, final);
    }
}
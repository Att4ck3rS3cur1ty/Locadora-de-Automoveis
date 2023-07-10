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

void OrdenadorVeiculo::quickSort(std::vector<Veiculo>& vetor, int begin, int end){
    int pivot = vetor[begin].getQuilometragem();
    int left = begin;
    int right = end;

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

    if (begin < right)
    {
        quickSort(vetor, begin, right);
    }

    if (left < end)
    {
        quickSort(vetor, left, end);
    }
}

void OrdenadorVeiculo::mergeSort(std::vector<Veiculo>& vetor){
    int input_length = vetor.size();
    // vetor[0].getValorLocacao();

    // verifica se array tem mais de um elemento
    if (input_length < 2)
    {
        return;
    }

    // divide array no meio e cria dois novos arrays (LR)
    int mid_index = input_length / 2;
    std::vector<Veiculo> left_half(mid_index);
    std::vector<Veiculo> right_half(input_length - mid_index);

    // popula o array L
    for (int i = 0; i < mid_index; i++)
    {
        left_half[i] = vetor[i];
    }

    // popula o array R
    for (int i = mid_index; i < input_length; i++)
    {
        right_half[i - mid_index] = vetor[i];
    }

    mergeSort(left_half);
    mergeSort(right_half);

    merge(vetor, left_half, right_half);
}

void OrdenadorVeiculo::merge(std::vector<Veiculo>& vetor, std::vector<Veiculo>& left_half, std::vector<Veiculo>& right_half){
    int left_size = left_half.size();
    int right_size = right_half.size();

    // iterators para percorrer os 3 loops
    int i, j, k = 0;

    // compara valores da esquerda e da direita e adiciona o menor
    // percorre para a próxima posição de cada um dos lados
    // ao final, vai para a próxima posição do array principal
    while (i < left_size && j < right_size)
    {
        if (left_half[i].getValorLocacao() <= right_half[j].getValorLocacao())
        {
            vetor[k] = left_half[i];
            i++;
        }

        else
        {
            vetor[k] = right_half[j];
            j++;
        }
        k++;
    }

    // se todas as verificações tiverem acabado, é possível que haja valores em 
    // L e/ou R. Basta adicioná-los ao vetor principal, pois já foram comparados
    while (i < left_size)
    {
        vetor[k] = left_half[i];
        i++;
        k++;
    }
    
    while (j < right_size)
    {
        vetor[k] = right_half[j];
        j++;
        k++;
    }
}
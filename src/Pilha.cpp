#include "../include/Pilha.h"

Pilha::Pilha() {
    top = nullptr;
}

void Pilha::push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int Pilha::pop() {
    if (isEmpty()) {
        return -1; // Valor inválido, pois assumimos que os elementos da pilha são inteiros positivos
    }

    Node* temp = top;
    int poppedValue = temp->data;
    top = top->next;
    delete temp;
    return poppedValue;
}

bool Pilha::isEmpty() {
    return top == nullptr;
}

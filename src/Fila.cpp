#include "../include/Fila.h"

Fila::Fila() {
    front = nullptr;
    rear = nullptr;
}

void Fila::enqueue(int reserva) {
    Node* newNode = new Node;
    newNode->reserva = reserva;
    newNode->next = nullptr;

    if (isEmpty()) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

int Fila::dequeue() {
    if (isEmpty()) {
        return -1; // Valor inválido, pois assumimos que as reservas são inteiros positivos
    }

    Node* temp = front;
    int reserva = temp->reserva;
    front = front->next;
    delete temp;

    if (front == nullptr) {
        rear = nullptr;
    }

    return reserva;
}

bool Fila::isEmpty() {
    return front == nullptr;
}

#ifndef FILA_H
#define FILA_H

class Fila {
private:
    struct Node {
        int reserva;
        Node* next;
    };

    Node* front;
    Node* rear;

public:
    Fila();
    void enqueue(int reserva);
    int dequeue();
    bool isEmpty();
};

#endif

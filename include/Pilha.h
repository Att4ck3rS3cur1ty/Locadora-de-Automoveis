#ifndef PILHA_H
#define PILHA_H

class Pilha {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* top;

public:
    Pilha();
    void push(int value);
    int pop();
    bool isEmpty();
};

#endif

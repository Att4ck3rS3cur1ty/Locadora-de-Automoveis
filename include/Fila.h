#ifndef FILA_H
#define FILA_H

#include <queue>

template <typename T>
class Fila {
private:
    std::queue<T> fila;

public:
    void enqueue(const T& elemento);
    T dequeue();
    bool isEmpty();
    int tamanho();
    void limparFila();
};

template <typename T>
void Fila<T>::enqueue(const T& elemento) {
    fila.push(elemento);
}

template <typename T>
T Fila<T>::dequeue() {
    T elemento = fila.front();
    fila.pop();
    return elemento;
}

template <typename T>
bool Fila<T>::isEmpty() {
    return fila.empty();
}

template <typename T>
int Fila<T>::tamanho() {
    return fila.size();
}

template <typename T>
void Fila<T>::limparFila() {
    while (!fila.empty()) {
        fila.pop();
    }
}

#endif

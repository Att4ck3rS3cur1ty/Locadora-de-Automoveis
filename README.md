# Locadora de Automóveis

Este é um projeto de uma locadora de automóveis implementado em C++. O sistema permite gerenciar clientes, funcionários, veículos e locações.

## Funcionalidades

O sistema oferece as seguintes funcionalidades:

- Cadastro de clientes, funcionários e veículos.
- Consulta de informações de clientes, funcionários e veículos.
- Realização de locações de veículos.
- Verificação da disponibilidade de veículos.
- Atualização da quilometragem dos veículos.
- Listagem de todas as locações ativas.
- Utilização de estruturas de dados como pilha e fila.
- Implementação dos algoritmos de ordenação Bubble Sort e Quick Sort.


## Estrutura do projeto

O projeto é modularizado com a seguinte estrutura:

```
projeto
├── include
│   ├── Pessoa.h
│   ├── Funcionario.h
│   ├── Cliente.h
│   ├── Veiculo.h
│   ├── OrdenaVeiculo.h
│   ├── Locacao.h
│   └── Locadora.h
└── src
    ├── Pessoa.cpp
    ├── Funcionario.cpp
    ├── Cliente.cpp
    ├── Veiculo.cpp
    ├── Locacao.cpp
    ├── Locadora.cpp
    └── main.cpp
```

- O diretório `include` contém os arquivos de cabeçalho (`.h`) de todas as classes.
- O diretório `src` contém os arquivos de implementação (`.cpp`) de todas as classes, incluindo o arquivo `main.cpp` que contém a função `main`.
- O arquivo `Locadora.cpp` contém a implementação das funções e métodos principais do sistema.

## Compilação e execução

Para compilar o projeto, execute o comando `make` no diretório raiz do projeto. Isso irá gerar o executável `locadora` na pasta `bin`.

Após a compilação bem-sucedida, você pode executar o programa digitando `./bin/locadora` no terminal.

## Estruturas de Dados Utilizadas

O projeto utiliza as seguintes estruturas de dados:

### Pilha

Uma pilha é uma estrutura de dados baseada no princípio LIFO (Last-In, First-Out), em que o último elemento inserido é o primeiro a ser removido. A pilha é utilizada no projeto para manter o histórico de locações de veículos, permitindo o acesso ao último registro de locação realizado. A implementação de pilha utilizada no projeto segue o conceito de uma pilha com operações de inserção (push), remoção (pop) e acesso ao elemento do topo (top).

### Fila

Uma fila é uma estrutura de dados baseada no princípio FIFO (First-In, First-Out), em que o primeiro elemento inserido é o primeiro a ser removido. A fila é utilizada no projeto para gerenciar a fila de espera para locações de veículos. Cada solicitação de locação é adicionada ao final da fila e é processada conforme a ordem de chegada. A implementação de fila utilizada no projeto inclui operações de inserção (push), remoção (pop) e acesso ao elemento da frente (front).

## Algoritmos de Ordenação

O projeto implementa os seguintes algoritmos de ordenação:

### Bubble Sort

O Bubble Sort é um algoritmo de ordenação simples que percorre repetidamente a lista a ser ordenada, comparando elementos adjacentes e trocando-os se estiverem na ordem errada. Esse processo é repetido até que a lista esteja completamente ordenada. O Bubble Sort é eficiente para pequenas listas ou quando a lista já está parcialmente ordenada, mas pode ser menos eficiente para listas maiores.

### Quick Sort

O Quick Sort é um algoritmo de ordenação eficiente e amplamente utilizado. Ele seleciona um elemento como pivô e particiona a lista em duas partes, uma contendo elementos menores que o pivô e outra contendo elementos maiores. Em seguida, o processo é repetido recursivamente nas duas partes até que toda a lista esteja ordenada. O Quick Sort é eficiente para listas grandes e possui um desempenho médio rápido.
## Abaixo segue o diagrama de classes do projeto:


![Diagrama de Classes](images/diagrama-classes.png)
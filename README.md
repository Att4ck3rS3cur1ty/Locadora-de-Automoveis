

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

## Estrutura do projeto

O projeto é modularizado com a seguinte estrutura:

```
projeto
├── include
│   ├── Pessoa.h
│   ├── Funcionario.h
│   ├── Cliente.h
│   ├── Veiculo.h
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

### Abaixo segue o diagrama de classes do projeto:


![Diagrama de Classes](images/diagrama-classes.png)
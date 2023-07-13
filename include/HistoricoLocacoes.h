#ifndef HISTORICO_LOCACOES_H
#define HISTORICO_LOCACOES_H

#include "Pilha.h"
#include <vector>

class HistoricoLocacoes {
private:
    Pilha pilhaHistorico;
    std::vector<int> historico;

public:
    void adicionarLocacao(int idLocacao);
    int obterUltimaLocacao();
    void limparHistorico();
};

#endif

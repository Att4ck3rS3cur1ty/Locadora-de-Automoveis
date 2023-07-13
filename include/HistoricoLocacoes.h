#ifndef HISTORICO_LOCACOES_H
#define HISTORICO_LOCACOES_H

#include "Pilha.h"

class HistoricoLocacoes {
private:
    Pilha pilhaHistorico;

public:
    void adicionarLocacao(int idLocacao);
    int obterUltimaLocacao();
};

#endif

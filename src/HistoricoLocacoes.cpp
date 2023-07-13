#include "../include/HistoricoLocacoes.h"

void HistoricoLocacoes::adicionarLocacao(int idLocacao) {
    pilhaHistorico.push(idLocacao);
}

int HistoricoLocacoes::obterUltimaLocacao() {
    return pilhaHistorico.pop();
}

void HistoricoLocacoes::limparHistorico() {
    historico.clear();
}
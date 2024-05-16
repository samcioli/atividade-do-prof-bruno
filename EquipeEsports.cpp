#include <iostream>
#include <string>
using namespace std;

struct EquipeEsports {
    string nome;
    int campeonatosVencidos;
    float valorTotalPremiacoes;
    int anoEstreia;

    void registrarCampeonatoVencido(float valorPremio) {
        campeonatosVencidos++;
        atualizarValorTotalPremiacoes(valorPremio);
    }

    void atualizarValorTotalPremiacoes(float valor) {
        valorTotalPremiacoes += valor;
    }

    bool verificarAnoEstreia(int anoAtual) {
        return anoAtual == anoEstreia;
    }

    void imprimir() {
        cout << "Nome: " << nome << endl;
        cout << "Campeonatos Vencidos: " << campeonatosVencidos << endl;
        cout << "Valor Total de Premiações: $" << valorTotalPremiacoes << endl;
        cout << "Ano de Estreia: " << anoEstreia << endl;
    }
};

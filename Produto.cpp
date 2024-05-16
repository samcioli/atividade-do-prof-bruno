#include <iostream>
#include <string>
using namespace std;

struct Produto {
    string nome;
    int quantidadeEstoque;
    float preco;

    void aplicarCupomDescontoValor(float valorDesconto) {
        preco -= valorDesconto;
    }

    void aplicarCupomDescontoPorcentagem(float percentualDesconto) {
        preco *= (1 - percentualDesconto / 100);
    }

    int verificarQuantidadeEmEstoque() {
        return quantidadeEstoque;
    }

    void imprimir() {
        cout << "Nome: " << nome << endl;
        cout << "Quantidade em Estoque: " << quantidadeEstoque << endl;
        cout << "Preço: $" << preco << endl;
    }
};

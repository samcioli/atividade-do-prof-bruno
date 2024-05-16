#include <iostream>
#include <string>
using namespace std;

struct Professor {
    string nome;
    float salario;
    int cargaHoraria;

    void reajusteSalarialEmValor(float valor) {
        salario += valor;
    }

    void reajusteSalarialEmPorcentagem(float percentual) {
        salario *= (1 + percentual / 100);
    }

    void descontoSalarialPorFaltaEmValor(float valorDesconto) {
        salario -= valorDesconto;
    }

    void descontoSalarialPorFaltaEmPorcentagem(float percentualDesconto) {
        salario *= (1 - percentualDesconto / 100);
    }

    void aumentarCargaHorariaDeTrabalho(int novaCargaHoraria) {
        salario *= static_cast<float>(novaCargaHoraria) / cargaHoraria;
        cargaHoraria = novaCargaHoraria;
    }

    void imprimir() {
        cout << "Nome: " << nome << endl;
        cout << "Salário: $" << salario << endl;
        cout << "Carga Horária: " << cargaHoraria << " horas/semana" << endl;
    }
};

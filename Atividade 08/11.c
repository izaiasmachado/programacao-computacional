// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 11 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>
#include <stdlib.h>

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void sort(double *v, int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < (n - 1); i++) {
            if (v[i] > v[i + 1]) {
                swap((v + i), (v + i + 1));
            }
        }
    }
}

int main() {
    int n = 10;
    double v[n];

    printf("Digite %d numeros reais: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }

    sort(v, n);

    for (int i = 0; i < n; i++) {
        printf("%.2lf%c", *(v + i), (i == (n - 1)) ? '\n' : ' ');
    }

    return 0;

}
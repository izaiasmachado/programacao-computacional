// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 3 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>

int main() {
    int n = 6;
    int v[n];

    printf("Digite %d valores inteiros: ", n);

    for (int i = (n - 1); i >= 0; i--) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d%c", v[i], (i == (n - 1)) ? '\n' : ' ');
    }

    return 0;
}
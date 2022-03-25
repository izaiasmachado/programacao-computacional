// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 1 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>

int main() {
    int n = 6;
    int a[n] = {1, 0, 5, -2, -5, 7};
    int sum = a[0] + a[1] + a[5];
    a[4] = 100;

    printf("SUM = %d\n", sum);

    for (int i = 0; i < n; i++) {
        printf("%d%c", a[i], (i == (n - 1)) ? '\n' : ' ');
    }

    return 0;
}
// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 9 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n = 10;
    int v[n + 1];

    printf("Digite %d numero inteiros: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Os numeros primos digitados sao: \n");
    for (int i = 0; i < n; i++) {
        if (isPrime(v[i])) {
            printf("v[%d] = %d\n", i, v[i]);
        }
    }

    return 0;
}
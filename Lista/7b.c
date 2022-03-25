// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 7b - Lista 1
// Aluno: Izaias Machado Pessoa Neto
// Data: 26/07/2020

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return (n != 1);
}

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("A sequencia de primos ate seu numero eh: ");

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d%c", i, (i == n) ? '\n' : ' ');
        }
    }

    return 0;
}
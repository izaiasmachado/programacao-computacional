// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 7c - Lista 1
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
    int n, sum = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        sum = (isPrime(i)) ? sum + i : sum;
    }

    printf("A soma dos primos ate seu numero eh: ");
    printf("%d\n", sum);

    return 0;
}
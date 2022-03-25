// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 10 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdio.h>

long fr(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fr(n - 1);
}

int main() {
    int n;

    printf("Digite um numero inteiro e positivo: ");
    scanf(" %d", &n);

    printf("O fatorial de %d eh %ld\n", n, fr(n));

    return 0;
}
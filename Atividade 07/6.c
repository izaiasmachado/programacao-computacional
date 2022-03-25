// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 6 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdio.h>

int parOuImpar(int n) {
    return (n % 2 == 0);
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Seu numero eh %s!!", (parOuImpar(n)) ? "par" : "impar");

    return 0;
}
// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdio.h>

int end, sum = 0;

int fp(int n) {
    if (n == end) {
        return (sum == end);
    }

    if (end % n == 0){
        sum += n;
    }

    return fp(n + 1);
}

int main() {
    printf("Digite um numero inteiro: ");
    scanf(" %d", &end);

    printf("Seu numero eh %s\n", (fp(1)) ? "perfeito!" : "imperfeito :/");

    return 0;
}
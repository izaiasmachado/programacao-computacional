// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 2 - Atividade 11
// Aluno: Izaias Machado Pessoa Neto
// Data: 15/07/2020

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 2;

    do {
        printf("Digite um numero impar: ");
        scanf("%d", &n);

        if (n % 2 == 0) {
            printf("Esse numero eh par, tente novamente!\n");
        } else {
            break;
        }

    } while(1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d%c", ((i == j) || ((i + j) == (n - 1))), (j == (n - 1)) ? '\n' : ' ');
        }
    }

    return 0;
}
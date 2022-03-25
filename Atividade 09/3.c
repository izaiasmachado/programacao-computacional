// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 3 - Atividade 9
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5, m = 5;
    double mtx[n][m], x;

    printf("Digite uma matriz %d x %d:\n", n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lf", &mtx[i][j]);
        }
    }

    printf("Agora digite um valor X qualquer: ");
    scanf("%lf", &x);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mtx[i][j] == x) {
                printf("Seu numero foi encontrado na posicao %d x %d\n", i + 1, j + 1);
                return 0;
            }
        }
    }

    printf("Seu valor nao foi encontrado na matriz :/\n");
    
    return 0;
}
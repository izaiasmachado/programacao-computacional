// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 5 - Atividade 9
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4, m = 4, aux;
    int mtx[n][m];

    printf("Matriz %d x %d gerada: \n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mtx[i][j] = rand() % 20 + 1;
            printf("%d%c", mtx[i][j], (j == (m - 1)) ? '\n' : ' ');
        }
    }


    printf("Matriz triangular inferior: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < j) {
                aux = 0;
            } else {
                aux = mtx[i][j];
            }

            printf("%d%c", aux, (j == (m - 1)) ? '\n' : ' ');
        }
    }

    return 0;
}
// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 2 - Atividade 9
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;

    printf("Essa eh a matriz identidade %d x %d: \n", n, n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d%c", (i == j) ? 1 : 0, (j == (n - 1)) ? '\n' : ' ');
        }
    }

    return 0;
}
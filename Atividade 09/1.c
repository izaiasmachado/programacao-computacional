// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 1 - Atividade 9
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4, m = 4, aux, count = 0;
    int numbs[16];

    printf("Digite uma matriz %d x %d:\n", n, m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &aux);

            if (aux > 10) {
                numbs[count++] = aux;
            }
        }
    }

    printf("A matriz digitada tem %d numeros maiores que 10%c \n", (count), (count > 0) ? ':' : '.');
    
    for (int i = 0; i < count; i++) {
        printf("%d%c", numbs[i], (i == (count - 1) ? '\n' : ' '));
    }

    return 0;
}
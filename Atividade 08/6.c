// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 6 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>
#include <stdlib.h>

int main() {    
    int n = 10, max;
    int v[n];
    int *occurences;

    printf("Digite %d numeros inteiros: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        max = (i == 0) ? v[i] : ((max < v[i]) ? v[i] : max);
    }

    occurences = (int*) malloc(sizeof(int) * max);

    for (int i = 0; i < n; i++) {
        occurences[v[i]]++;
    }

    printf("Os numeros repetidos sao: ");

    for (int i = 0; i <= max; i++) {
        if (occurences[i] > 1) {
            printf("%d%c", i, (i == (n - 1)) ? '\n' : ' ');
        }
    }

    free(occurences);

    return 0;
}
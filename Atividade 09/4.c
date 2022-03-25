// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Atividade 9
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 10, m = 10, aux;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i < j) {
                aux = 2 * i + 7 * j - 2;
            } else if (i == j) {
                aux = 3 * pow(i, 2) - 1;
            } else if (i > j) {
                aux = 4 * pow(i, 3) - 5 * pow(j, 2) + 1; 
            }

            printf("%d%c", aux, (j == (m - 1)) ? '\n' : ' ');
        }
    }

    return 0;
}
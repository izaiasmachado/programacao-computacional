// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 2 - Lista 1
// Aluno: Izaias Machado Pessoa Neto
// Data: 26/07/2020

#include <stdio.h>
#include <math.h>
#define MAXN 1001

typedef struct {
    int x;
    int y;
} Pair;

int main() {
    int n, c = 0, dist, temp;

    scanf("%d", &n);
    
    Pair positions[n], aux;
    char v[n + 1][n + 1];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", & v[i][j]);
        
            if (v[i][j] == '0') {
                aux.x = i;
                aux.y = j;
                positions[c++] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dist = -1;
            
            for (int k = 0; k <= c; k++) {
                aux = positions[k];

                temp = (fabs(aux.x - i) + fabs(aux.y - j));
                dist = (temp < dist || dist == -1) ? temp : dist;
            }

            printf("%d", dist);
        }

        printf("\n");
    }

    return 0;
}
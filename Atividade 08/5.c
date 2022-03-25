// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 5 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>

typedef struct
{
    int position;
    double value;
} Value;

int main() {
    int n = 5;
    double v[n];
    Value min, max;
    
    printf("Digite %d valores: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);

        if (i == 0) {
            min.position = i;
            max.value = v[i];
            max.position = i;
            max.value = v[i];
        } else {
            if (min.value > v[i]) {
                min.position = i;
                min.value = v[i];
            }

            if (max.value < v[i]) {
                max.position = i;
                max.value = v[i];
            }
        }
    }

    printf("O maior esta na %da posicao\n", max.position + 1);
    printf("O menor esta na %da posicao\n", min.position + 1);
    
    return 0;
}
// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 2 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>

int main() {
    int n = 10;
    double v[n], max, min;

    printf("Digite %d valores: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
        
        if (i == 0) {
            max = v[i];
            min = v[i];
        } else {
            if (max < v[i]) {
                max = v[i];
            }

            if (min > v[i]) {
                min = v[i];
            }
        }
    }

    printf("Maior = %.2lf\nMenor = %.2lf\n", max, min);

    return 0;
}
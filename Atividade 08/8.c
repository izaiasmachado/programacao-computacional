// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 8 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>
#include <math.h>

int main() {
    int n = 10;
    double v[n + 1], sum = 0;

    printf("Digite %d notas: ", n);

    for (int i = 1; i <= n; i++) {
        scanf("%lf", &v[i]);
        sum += v[i];
    }

    double m = (sum / n);
    sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += pow((v[i] - m), 2);
    }

    printf("O desvio padrao das notas digitadas eh de %.2lf unidades.\n", sqrt((1.0 / (n - 1)) * sum));

    return 0;
}
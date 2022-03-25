// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 7 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>

int main() {
    int n;
    double v, sum = 0;

    printf("Digite quantos produtos voce tem no estoque: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite o valor do %do produto: ", i);
        scanf("%lf", &v);
        sum += v;
    }

    printf("Voce tem %.2lf reais em estoque.\n", sum);
    printf("A media de valor dos seus produtos eh de %.2lf rea", (sum / n));
    printf("%s.\n", (sum > 1) ? "is" : "l");
}
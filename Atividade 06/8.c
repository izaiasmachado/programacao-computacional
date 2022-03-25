// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 8 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>

int main() {
    int n = 0;
    char opc = 's';
    double v, sum = 0;

    do {
        n++;
        printf("Digite o valor do %do produto: ", n);
        scanf("%lf", &v);
        sum += v;

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &opc);
    } while (opc == 's' || opc == 'S');

    printf("Voce tem %.2lf reais em estoque.\n", sum);
    printf("A media de valor dos seus produtos eh de %.2lf rea", (sum / n));
    printf("%s.\n", (sum > 1) ? "is" : "l");
}
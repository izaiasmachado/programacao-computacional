// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 8 - Atividade 4
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>

int main() {
    double s, a;

    printf("Digite seu salario atual em reais: ");
    scanf("%lf", &s);

    if (s >= 0 && s <= 600) {
        a = (s * 1.3);
    } else if (s <= 1100) {
        a = (s * 1.25);
    } else if (s <= 2400) {
        a = (s * 1.2);
    } else if (s <= 3550) {
        a = (s * 1.15);
    } else {
        a = (s * 1.1);
    }

    printf("Seu novo salario deveria ser de %.2lf reais.\n", a);

    return 0;
}
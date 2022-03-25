// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Aluno: Izaias Machado Pessoa Neto
// Descrição: Questão 1 - Atividade 03
// Data: 22/04/2020

#include <stdio.h>

int main() {
    double a, b, c;

    printf("Digite 3 numeros: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double media = ((a + b + c) / 3);
    printf("A media desses 3 numeros eh: %lf\n", media);

    return 0;
}
// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 7 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double imc(double altura, char sexo) {
    return (sexo == 'M') ? (72.7 * altura - 58) : ((sexo == 'F') ? (62.1 * altura - 44.7) : -1);
}

int main() {
    double h;
    char s;

    printf("Digite sua altura: ");
    scanf("%lf", &h);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &s);

    double ans = imc(h, s);

    if (ans == -1) {
        printf("Digite um sexo valido!");
    } else {
        printf("Seu peso ideal eh %.2lf kg", ans);
    }

    return 0;
}
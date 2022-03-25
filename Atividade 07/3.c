// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 3 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double x1 = 0, x2 = 0;
int bool = 1;

double delta(double a, double b, double c) {
    return pow(b, 2) - (4 * a * c);
}

void bhaskara(double a, double b, double c) {
    double ansDelta = delta(a, b, c);

    if ((a != 0) && ansDelta >= 0) {
        x1 = (-b + sqrt(ansDelta)) / (2 * a);
        x2 = (-b - sqrt(ansDelta)) / (2 * a);
    } else {
        bool = 0;
    }
}

int main() {
    double a, b, c;

    printf("Digite, respectivamente, A, B e C de uma equacao de 2o grau: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    bhaskara(a, b, c);

    if (bool == 1) {
        printf("As raizes da sua equacao sao X1 = %lf e X2 = %lf\n", x1, x2);
    } else {
        printf("Nao foi possivel calcular as raizes :/\n");
    }

    return 0;
}
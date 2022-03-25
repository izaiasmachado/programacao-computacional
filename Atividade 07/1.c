// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 1 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double volumeEsfera(double r) {
    return ((4 * M_PI * pow(r, 3)) / 3);
}

int main() {
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    printf("O volume da esfera eh: %.2lf u.v.", volumeEsfera(raio));

    return 0;
}
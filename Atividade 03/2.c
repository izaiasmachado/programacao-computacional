// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Aluno: Izaias Machado Pessoa Neto
// Descrição: Questão 2 - Atividade 03
// Data: 22/04/2020

#include <stdio.h>

int main() {
    double b1, b2, h;

    printf("Digite as duas bases e a altura de um trapezio, respectivamente: ");
    scanf("%lf %lf %lf", &b1, &b2, &h);

    double area = (((b1 + b2) * h) / 2);
    printf("A area do trapezio digita eh de %lf unidades\n", area);

    return 0;
}
// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 6 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>
#include <math.h>

int main() {
    double a, b;

    printf("Digite dois valores: ");
    scanf("%lf %lf", &a, &b);

    a = ceil(a);
    b = ceil(b);

    printf("Os inteiros entre esses numeros sao: ");

    for (int i = a; i < b; i++)
        printf("%d ", i);
        
    return 0;
}
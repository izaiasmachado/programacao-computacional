// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 6 - Lista 1
// Aluno: Izaias Machado Pessoa Neto
// Data: 26/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double seno(int graus) {
    int x;
    double sum = 0, f = 1, rad, end = 300;
    graus = graus % 360;
    rad = graus * M_PI / 180;

    for (int i = 0; i < end; i++) {
        x = (i % 2 == 0) ? 1 : -1;
        sum += x * (pow(rad, 2 * i + 1) / tgamma((2 * i + 1) + 1));
    }
    
    return sum;
}

int main() {
    int n;
    printf("Digite o valor inteiro de um angulo em graus: ");
    scanf("%d", &n);
    printf("O valor do seno de %d eh %lf\n", n, seno(n));

    return 0;
}
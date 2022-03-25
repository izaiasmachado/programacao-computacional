// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 3 - Atividade 10
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float a, b;
  
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("Antes da troca:\nA = %.2f B = %.2f\n", a, b);
    troca(&a, &b);
    printf("Depois da troca:\nA = %.2f B = %.2f", a, b);

    return 0;
}
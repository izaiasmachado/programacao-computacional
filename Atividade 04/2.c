// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 2 - Atividade 4
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>

int main() {
    double a;

    printf("Digite um valor qualquer: ");
    scanf("%lf", &a);
    printf("Seu valor eh %s\n", (a == 0) ? "neutro" : ((a > 0) ? "positivo" : "negativo"));

    return 0;
}
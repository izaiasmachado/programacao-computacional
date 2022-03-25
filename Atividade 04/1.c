// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 1 - Atividade 4
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>

int main() {
    double a;

    printf("Digite um valor qualquer: ");
    scanf("%lf", &a);
    printf("%sEH MAIOR QUE 10!", (a > 10) ? "" : "NAO ");

    return 0;
}
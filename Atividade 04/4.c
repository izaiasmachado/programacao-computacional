// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Atividade 4
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>

int main() {
    double a, b;

    printf("Digite as notas das suas duas avaliacoes: ");
    scanf("%lf %lf", &a, &b);

    double media = ((a + b) / 2); 
    printf("Voce tirou %.2lf e foi ", media);

    if (media < 6) {
        printf("reprovado :/");
    } else {
        printf("aprovado!!");
    }

    printf("\n");

    return 0;
}
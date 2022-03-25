// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 6 - Atividade 4
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>

int main() {
    int senhaValida = 1234;
    int senhaDeEntrada;

    printf("=== Site da CIA ===\n");
    printf("Digite uma senha composta de quatro numeros: ");
    scanf("%d", &senhaDeEntrada);
    printf("ACESSO %s\n", (senhaValida == senhaDeEntrada) ? "PERMITIDO" : "NEGADO");

    return 0;
}
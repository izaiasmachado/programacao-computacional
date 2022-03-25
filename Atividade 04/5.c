// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 5 - Atividade 4
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite tres valores correspondentes aos lados de um triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    int ehTriangulo = ((a < (b + c)) && (b < (a + c)) && (c < (a + b)));
    printf("%s triangulo\n", (ehTriangulo) ? "Eh um" : "Nao eh" );

    return 0;
}
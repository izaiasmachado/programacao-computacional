// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 1 - Atividade 10
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, *p;
    y = 0;
    p = &y;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    printf("%d %d %d", x, y, *p);

    return 0;
}
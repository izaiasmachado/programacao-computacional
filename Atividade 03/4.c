// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Aluno: Izaias Machado Pessoa Neto
// Descrição: Questão 4 - Atividade 03
// Data: 22/04/2020

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    printf("Inicialmente A=%d e B=%d\n", a, b);
 
    temp = b;
    b = a;
    a = temp;
 
    printf("Apos a troca: A=%d e B=%d\n", a, b);

    return 0;
}
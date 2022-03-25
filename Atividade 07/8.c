// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 8 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdio.h>

int end, count = 0;

int dr(int n) {
    if (end % n == 0){
        count++;
    }

    return (n == end) ? count : dr(n + 1);
}

int main() {
    printf("Digite um numero inteiro e positivo: ");
    scanf(" %d", &end);

    printf("Seu numero possui %d divisores.\n", dr(1));

    return 0;
}
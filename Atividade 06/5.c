// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 5 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>

int main() {
    int n, s = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    n--;
    
    for (int i = 0; i < n; i++) {
        s += 4;
    }

    printf("Na sequencia [%d] = %d", n, s);

    return 0;
}
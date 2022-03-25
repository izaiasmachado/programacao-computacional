// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 3 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>

int main() {
    double aux;
    int count = 0;

    printf("Digite 10 numeros: ");

    for (int i = 0; i < 10; i++) {
        scanf("%lf", & aux);

        if (aux < 0) {
            count++;
        }
    }

    printf("%d numeros negativos.\n", count);
    return 0;
}
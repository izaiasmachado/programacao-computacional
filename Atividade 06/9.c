// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 9 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>

int main() {
    double aux, maior, menor;

    printf("Digite 100 numeros: ");

    for (int i = 0; i < 100; i++) {
        scanf("%lf", &aux);

        if (i == 0) {
            maior = aux;
            menor = aux;
        }

        if (aux > maior) {
            maior = aux;
        }

        if (aux < menor) {
            menor = aux;
        }
    }

    printf("O maior eh: %.2lf\n O menor eh: %.2lf\n", maior, menor);

    return 0;
}
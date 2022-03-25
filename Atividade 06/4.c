// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>

int main() {
    double aux, val = 0;
    int count = 0;

    printf("Digite 10 numeros: ");

    for (int i = 0; i < 10; i++) {
        scanf("%lf", & aux);
        val += aux;
        count++;
    }

    printf("A media desses numero eh %.2lf\n", (val / count));
    return 0;
}
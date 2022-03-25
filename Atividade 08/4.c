// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>

int main() {
    int n = 15;
    double v[n], sum;

    printf("Digite a nota dos %d alunos: ", n);

    for (int i = 0; i < 15; i++) {
        scanf("%lf", &v[i]);
        sum += v[i];
    }
    
    printf("%.2lf\n", (sum / n));

    return 0;
}
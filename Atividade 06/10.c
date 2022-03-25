// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 10 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>

int main() {
    int c = 0;
    double aux, maior; 

    printf("Digite quantos numeros quiser. Ao final, digite 0.\n");

    while(scanf("%lf", &aux) && (aux != 0) ) {
        c++;

        if (c == 1) {
            maior = aux;
        } 
        
        else if (aux > maior) {
            maior = aux;
        }

    }

    printf("O maior numero eh: %.2lf", maior);

    return 0;
}
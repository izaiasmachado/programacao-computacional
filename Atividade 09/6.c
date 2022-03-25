// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 6 - Atividade 9
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
    int alunos = 5, questoes = 10, aux, count = 0;
    char respostas[alunos][questoes];
    char gabarito[questoes];
    int *acertos;

    acertos = (int *) malloc(11 * sizeof (int));
    
    for (int i = 0; i < alunos; i++) {
        printf("Digite as respostas do %do aluno: ", i + 1);
        for (int j = 0; j < questoes; j++) {
            scanf(" %c", &respostas[i][j]);
        }
    }

    printf("Digite o gabarito das questoes: ");
    for (int i = 0; i < questoes; i++) {
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < alunos; i++) {
        for (int j = 0; j < questoes; j++) {
            if (respostas[i][j] == gabarito[j]) {
                acertos[i] += 1;
            }
        }
        printf("O %do aluno acertou %d de %d questoes\n", i + 1, acertos[i], questoes);
    }

    return 0;
}
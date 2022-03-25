// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 3 - Lista 1
// Aluno: Izaias Machado Pessoa Neto
// Data: 26/07/2020

#include <stdio.h>
#include <stdlib.h>

int quantidaDeAlunos, quantidadeDeDias;

int acontece(int *alunos, int minimoDeAlunos) {
    int pontuais = 0;
    
    for (int i = 0; i < quantidaDeAlunos; i++) {
        pontuais = (alunos[i] <= 0) ? pontuais + 1 : pontuais;
    }

    return (pontuais >= minimoDeAlunos);
}

int *aberturas(int **alunos, int minimoDeAlunos) {
    int *dias;

    dias = (int *) malloc(sizeof(int) * quantidadeDeDias);

    for (int i = 0; i < quantidadeDeDias; i++) {
        dias[i] = acontece(alunos[i], minimoDeAlunos);
    }

    return dias;
}

void allocMtx(int ***mtx);
void freeMtx(int **mtx);

int main() {
    int minimoDeAlunos;
    int **alunos;

    printf("Digite a quantidade de dias que voce ira avaliar: ");
    scanf("%d", &quantidadeDeDias);

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &quantidaDeAlunos);

    printf("Digite tambem a quantidade minima de alunos para realizacao da aula: ");
    scanf("%d", &minimoDeAlunos);

    allocMtx(&alunos);

    for (int i = 0 ; i < quantidadeDeDias; i++) {
        printf("Digite o horario dos alunos do %do dia (seguidos de espaco): ", i + 1);

        for (int j = 0 ; j < quantidaDeAlunos; j++) {
            scanf(" %d", &alunos[i][j]);
        }
    }

    int *aulas = aberturas(alunos, minimoDeAlunos);
    
    for (int i = 0; i < quantidadeDeDias; i++) {
        printf("No %do dia%steve aula.\n", i + 1, (aulas[i] == 1) ? " " : " nao "); 
    }

    free(aulas);
    freeMtx(alunos);

    return 0;
}

void allocMtx(int ***mtx){
    int l = quantidadeDeDias;
    int c = quantidaDeAlunos;

    *mtx = (int **) malloc(sizeof(int *) * l);

    for(int i = 0; i < l; i++){
        *(*mtx + i) = (int *) malloc(sizeof(int) * c);
    }
}

void freeMtx(int **mtx) {
    int l = quantidadeDeDias;

    for (int i = 0; i < l; i++) {
        free(mtx[i]);
    }

    free(mtx);
}
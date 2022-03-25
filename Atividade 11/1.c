// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 1 - Atividade 11
// Aluno: Izaias Machado Pessoa Neto
// Data: 15/07/2020

#include <stdio.h>
#include <stdlib.h>

void allocMtx(double ***mtx, int l, int c){
    *mtx = (double **) malloc(sizeof(double *) * l);

    for(int i = 0; i < l; i++){
        *(*mtx + i) = (double *) malloc(sizeof(double) * c);
    }
}

void scanMtx(double **mtx, int l, int c) {
    double *n;

    for (int i = 0; i < l; i++) {
        n = *(mtx + i); 
        for (int j = 0; j < c; j++) {
            scanf("%lf", (n + j));
        }
    }
}

void freeMtx(double **mtx, int l, int c) {
    for (int i = 0; i < l; i++) {
        free(mtx[i]);
    }

    free(mtx);
}

int main() {
    double **m1, **m2;
    int l = 3, c = 3;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &l);

    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);

    allocMtx(&m1, l, c);
    allocMtx(&m2, l, c);

    printf("Digite a primeira matriz: \n");
    scanMtx(m1, l, c);

    printf("Digite a segunda matriz: \n");
    scanMtx(m2, l, c);

    printf("O resultado de sua soma eh: \n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            double sum = m1[i][j] + m2[i][j];
            printf("%lf%c", sum, (j == (c - 1)) ? '\n' : ' ');
        }
    }

    freeMtx(m1, l, c);    
    freeMtx(m2, l, c);

    return 0;
}
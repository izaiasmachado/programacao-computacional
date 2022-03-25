// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Atividade 11
// Aluno: Izaias Machado Pessoa Neto
// Data: 15/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula = 0;
    char nome[100] = "SEM NOME REGISTRADO";
    double notas[3];
    double media;
    int aprovado;
} Aluno;

typedef struct {
    Aluno maiorNotaPrimeira;
    Aluno maiorMedia;
    Aluno menorMedia;
} Estatisticas;

void printAluno (Aluno aluno, int provas) {
    printf("Matricula:  %s\n", aluno.nome);
    printf("Nome:  %s\n", aluno.nome);
    
    printf("Notas: ");
    for (int i = 0; i < provas; i++) {
        printf("%.2lf%c", aluno.notas[i], (i == (provas - 1)) ? '\n' : ' ');
    }

    printf("Media Geral: %.2lf\n", aluno.media);
}

Aluno scanAluno (int provas) {        
    Aluno aluno;
    
    printf("Matricula: ");
    scanf(" %d", &aluno.matricula);
    printf("Nome: ");
    scanf(" %[^\n]%*c", aluno.nome);
    
    double sum = 0;
    
    for (int j = 0; j < provas; j++) {
        printf("Digite a nota da %da prova: ", j + 1);
        scanf("%lf", &aluno.notas[j]);
        sum += aluno.notas[j];
    }

    printf("=======================================\n");

    aluno.media = (sum / provas);
    aluno.aprovado = (aluno.media >= 6);

    return aluno;
}

int main() {
    int n = 5, provas = 3;
    Aluno alunos[n], aux;
    Estatisticas estatisticas;

    for (int i = 0; i < n; i++) {
        printf("Digite os dados do %do aluno\n", i + 1);
        aux = scanAluno(provas);

        if (i == 0) {
            estatisticas.maiorNotaPrimeira = aux;
            estatisticas.maiorMedia = aux;
            estatisticas.menorMedia = aux;
        }

        estatisticas.maiorNotaPrimeira = (estatisticas.maiorNotaPrimeira.notas[0] < aux.notas[0]) ? aux : estatisticas.maiorNotaPrimeira; 
        estatisticas.maiorMedia = (estatisticas.maiorMedia.media < aux.media) ? aux : estatisticas.maiorMedia; 
        estatisticas.menorMedia = (estatisticas.menorMedia.media > aux.media) ? aux : estatisticas.menorMedia; 

        alunos[i] = aux;
    }
    
    printf("============ Estatisticas ============\n");
    printf("Aluno com maior nota na primeira prova: \n");
    printAluno(estatisticas.maiorNotaPrimeira, provas);
    printf("=======================================\n");

    printf("Aluno com maior media geral: \n");
    printAluno(estatisticas.maiorMedia, provas);
    printf("=======================================\n");

    printf("Aluno com menor media geral: \n");
    printAluno(estatisticas.menorMedia, provas);
    printf("=======================================\n");
    

    printf("============= Lista Final =============\n");
    printf("|  RESULTADO - MATRICUlA - NOME\n");
    for (int i = 0; i < n; i++) {
        Aluno aluno = alunos[i];

        printf("| [%s - %d - %s\n", (aluno.aprovado) ? "APROVADO] " : "REPROVADO]", aluno.matricula, aluno.nome);
    }

    printf("=======================================\n");

    return 0;
}
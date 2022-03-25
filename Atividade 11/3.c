// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 3 - Atividade 11
// Aluno: Izaias Machado Pessoa Neto
// Data: 15/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char meses[12][20] = { "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char descricao[100];
    Data data;
    Horario horario;
} Compromisso;

void printCompromisso(Compromisso evento) {
    Data dataAux;
    Horario horarioAux;
    dataAux = evento.data;
    horarioAux = evento.horario;
    printf("Descricao: %s\n", evento.descricao);

    int idMes = dataAux.mes;

    printf("Ocorrera no dia %d de %s de %d\n", dataAux.dia, meses[idMes], dataAux.ano);

    printf("Às %d hora%s", horarioAux.hora, (horarioAux.hora > 1) ? "s, " : ", ");
    printf("%d minuto%se ", horarioAux.minuto, (horarioAux.minuto > 1) ? "s " : " ");
    printf("%d segundo%s\n", horarioAux.segundo, (horarioAux.segundo > 1) ? "s." : ".");

    printf("======================================\n");
}

int main() {
    Compromisso a, b;
    Data dataAux;
    Horario horarioAux;

    printf("============ Minha agenda ============\n");

    strcpy(a.descricao, "Aniversário da Vovó");

    dataAux.dia = 16;
    dataAux.mes = 3;
    dataAux.ano = 2020;

    horarioAux.hora = 1;
    horarioAux.minuto = 13;
    horarioAux.segundo = 20;

    a.data = dataAux;
    a.horario = horarioAux;

    printCompromisso(a);

    strcpy(b.descricao, "Jogo de Ping-pong");

    dataAux.dia = 3;
    dataAux.mes = 9;
    dataAux.ano = 2021;

    horarioAux.hora = 19;
    horarioAux.minuto = 1;
    horarioAux.segundo = 1;
    
    b.data = dataAux;
    b.horario = horarioAux;

    printCompromisso(b);

    return 0;
}
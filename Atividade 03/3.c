// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Aluno: Izaias Machado Pessoa Neto
// Descrição: Questão 3 - Atividade 03
// Data: 22/04/2020

#include <stdio.h>
/*
    Vou organizar o programa de forma que a interface gráfica esteja na função main e as
    operações em funções menores, para facilitar o entendimento.
*/

int condBissexto(int ano);
int numeroDeDias(int aniversario[], int atual[]);

int main() {
    int aniversario[3];
    int atual[3];

    printf("Esse programa calcula a quantidade de dias que voce viveu.\n");
    printf("Para isso, digite as datas como DIA/MES/ANO. Exemplo: 07/07/2002\n");
    
    printf("Digite sua data de nascimento: ");
    scanf("%d/%d/%d", &aniversario[0], &aniversario[1], &aniversario[2]);

    printf("Digite a data atual: ");
    scanf("%d/%d/%d", &atual[0], &atual[1], &atual[2]);

    int dias = numeroDeDias(aniversario, atual);
    if (dias >= 0) {
        printf("Parabens! Voce ja viveu %d dias!\n", dias);
    } else {
        printf("Por favor, digite datas validas!!\n");
    }
}

int condBissexto(int ano) {
    /* Em C, ao contrário do C++ não há operador booleano, por isso a seguinte expressão
       condicional resulta em uma unidade inteira. */

    return ((ano % 4 == 0) && (ano % 400 == 0 || ano % 100 != 0));
}

int numeroDeDias(int aniversario[], int atual[]) {
    // Opto por alocar os dias dos meses de forma dinâmica para facilitar a busca
    int meses[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
    int diaAniversario = aniversario[0], mesAniversario = aniversario[1], anoAniversario = aniversario[2];
    int diaAtual = atual[0], mesAtual = atual[1], anoAtual = atual[2];

    /*
        Para decompor o problema basta calcular a quantidade de dias vividos até o aniversario do ano
        anterior. Daí em diante, calculamos a quantidade de dias até o aniversario e também a quanti-
        dade de dias até o dia atual.
    */

    int diasInicio = diaAniversario + condBissexto(anoAniversario);
    for (int i = 0; i < (mesAniversario - 1); i++) {
        diasInicio += meses[i];
    }

    int diasFim = diaAtual + condBissexto(anoAtual);
    for (int i = 0; i < (mesAtual - 1); i++) {
        diasFim += meses[i];
    }

    int anosEmDias = 0;
    for (int i = anoAniversario; i < anoAtual; i++) {
        anosEmDias += 365 + condBissexto(i);
    }

    /*
        Se o aniversario da pessoa não chegou, então a variável diasInicio será maior
        que diasFim.
        Senão, será igual ou maior, logo o aniversário é nesse dia ou já passou.
    */

    return anosEmDias - diasInicio + diasFim;
}
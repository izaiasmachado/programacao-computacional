// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 11 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char login[] = "admin";
    char senha[] = "root";
    char aux_l[10];
    char aux_s[10];
    
    do {
        printf("Digite seu login: ");
        gets(aux_l);

        printf("Digite sua senha: ");
        gets(aux_s);

        system("cls");
    } while((strcmp(login, aux_l) != 0) && (strcmp(login, aux_l) != 0));

    printf("Acesso concedido!");

    return 0;
}
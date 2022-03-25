// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 5 - Atividade 5
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int ans;
    char pais[100];
    char paises[7][100] = { "estados unidos", "espanha", "reino unido", "russia", "italia", "alemanha", "brasil" };

    printf("Digite o pais que voce reside: ");
    gets(pais);

    // Passa toda a string para letras minusculas
    for(int i = 0; pais[i]; i++){
        pais[i] = tolower(pais[i]);
    }

    for (int i = 0 ; i < 7; i++) {
        if (strcmp(pais, paises[i]) == 0) {
            ans = i;
        }
    }

    switch (ans) {
        case 0:
            printf("Seu pais possui 1.37 milhoes casos de COVID-19");
            break;

        case 1:
            printf("Seu pais possui 227 mil casos de COVID-19");
            break;

        case 2:
            printf("Seu pais possui 223 mil casos de COVID-19");
            break;

        case 3:
            printf("Seu pais possui 221 mil casos de COVID-19");
            break;

        case 4:
            printf("Seu pais possui 219 mil casos de COVID-19");
            break;

        case 5:
            printf("Seu pais possui 172 mil casos de COVID-19");
            break;

        case 6:
            printf("Seu pais possui 163 mil casos de COVID-19");
            break;

        default:
            printf("Sem dados do seu pais :/");
            break;
    }

    printf("\n");

    return 0;
}
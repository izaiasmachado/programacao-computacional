// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Atividade 5
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>
#include <ctype.h>

int main() {   
    char conceito;

    printf("Digite o conceito para te avaliarmos: ");
    scanf("%c", &conceito);
    conceito = tolower(conceito); // Para evitar erros se o usuario escrever o conceito em letras minusculas ou maiusculas.

    switch (conceito) {
        case 'a':
            printf("Excelente");
            break;
        case 'b':
            printf("Otimo");
            break;
        case 'c':
            printf("Bom");
            break;
        case 'd':
            printf("Regular");
            break;
        case 'e':
            printf("Ruim");
            break;
        case 'f':
            printf("Nos vemos no ano que vem...");
        break;

        default:
            printf("ERRO: Conceito Inexistente");
            break;
    }

    printf("\n");

    return 0;
}
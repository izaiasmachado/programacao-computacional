// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Atividade 10
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strCompare(char *a, char *b) {
    if (*a == 0 && *b == 0) {
        return 1;
    } else if ((*a == 0 && b != a) || (*b == 0 && a != b)){
        return 0;
    } else if (*a == *b) {
        return strCompare(a + 1, b + 1);
    }
}

int main() {
    int MAXN = 100 * sizeof(double);
    char *a, *b, aux;
    a = (char *) malloc(MAXN);
    b = (char *) malloc(MAXN);

    printf("%d %d\n", sizeof (double), sizeof (char));

    printf("Digite uma string: ");
    scanf("%[^\n]%*c", a);


    printf("Digite outra string: ");
    scanf("%[^\n]%*c", b);

    printf("%s\n", (strCompare(a, b)) ? "Suas strings sao iguais!" : "Suas strings sao diferentes :/");

    free(a);
    free(b);

    return 0;
}
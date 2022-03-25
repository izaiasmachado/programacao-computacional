// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 6 - Atividade 10
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substr(char *str, char *substr) {
    int it;
    int sizeStr = strlen(str);
    int sizeSubstr = strlen(substr);

    if (*str == 0) {
        return 0;
    }

    for (int i = 0; i < sizeStr; i ++) {
        it = 0;
        
        if (*(str + i) == *substr) {
            while (it < sizeSubstr) {
                if (*(str + i + it) != *(substr + it)) {
                    break;
                }

                it++;
            }

            if (it == sizeSubstr) {
                return 1;
            }
        }            
    }

    return 0;
}

int main() {
    int MAXN = 100 * sizeof(double);
    char *a, *b, aux;
    a = (char *) malloc(MAXN);
    b = (char *) malloc(MAXN);

    printf("Digite uma string A: ");
    scanf("%[^\n]%*c", a);

    printf("Digite outra string B: ");
    scanf("%[^\n]%*c", b);

    printf("A string A%sesta contida na B.\n", (substr(a, b)) ? " " : " nao ");

    free(a);
    free(b);

    return 0;
}
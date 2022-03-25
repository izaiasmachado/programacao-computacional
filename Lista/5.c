// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 5 - Lista 1
// Aluno: Izaias Machado Pessoa Neto
// Data: 26/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strstr(char *str, char *substr) {
    int it, count = 0;
    int sizeStr = strlen(str);
    int sizeSubstr = strlen(substr);

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
                count++;
            }
        }            
    }

    return count;
}

int main() {
    int MAXN = 100 * sizeof(double);
    char *a, *b, aux;
    a = (char *) malloc(MAXN);
    b = (char *) malloc(MAXN);

    printf("Digite a frase: ");
    scanf("%[^\n]%*c", a);

    printf("Agora, digite a palavra: ");
    scanf("%[^\n]%*c", b);

    int ans = strstr(a, b);

    if (ans > 0) {
        printf("Sua palavra aparece %d vezes dentro da frase.", ans);
    } else {
        printf("Sua palavra nao ocorre dentro da frase.\n");
    }

    free(a);
    free(b);

    return 0;
}
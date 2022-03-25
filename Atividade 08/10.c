// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 10 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>

int isEven(int n) {
    return (n % 2 == 0);
}

int main() {
    int n = 10, even = 0, odd = 0;    
    int v[n], v1[n], v2[n];

    printf("Digite %d numero inteiros: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);

        if (isEven(v[i])) {
            v2[even++] = v[i];
        } else {
            v1[odd++] = v[i];
        }
    }

    printf("Os numeros impares foram: ");
    for (int i = 0; i < odd; i++) {
        printf("%d%c", v1[i], (i == (odd - 1)) ? '\n' : ' ');
    }

    printf("Os numeros pares foram: ");
    for (int i = 0; i < even; i++) {
        printf("%d%c", v2[i], (i == (even - 1)) ? '\n' : ' ');
    }

    return 0;
}
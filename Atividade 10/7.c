// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 7 - Atividade 10
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>

void minmax(int *v, int n, int *ans) {
    int min = *v, max = *v;

    for (int i = 0; i < n; i++) {
        if (min > v[i]) {
            min = v[i];
        }

        if (max < v[i]) {
            max = v[i];
        }
    }
    
    ans[0] = min;
    ans[1] = max;
}

int main() {
    int n, *v, ans[2] = { 0, 0 };

    printf("Digite o tamanho do seu vetor: ");
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));

    printf("Agora digite %d numeros: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    minmax(v, n, ans);

    printf("MINIMO = %d\nMAXIMO = %d\n", ans[0], ans[1]);
}
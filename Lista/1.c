// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 1 - Lista 1
// Aluno: Izaias Machado Pessoa Neto
// Data: 26/07/2020

#include <stdio.h>
#include <stdlib.h>
#define MAXN 501

int main() {
    int n, ans = 0;
    int v[MAXN];
	
    scanf("%d", &n);
	
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int ultimo = -1, count = 0;

			for (int k = 0; k < n; k++) {
				if ((v[i] == v[k] || v[j] == v[k]) && v[k] != ultimo) {
				    count++;
				    ultimo = v[k];
                } 
			}

            ans = (ans < count) ? count : ans;
		}
	}

    printf("%d\n", ans);

	return 0;
}
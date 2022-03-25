// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 7 - Atividade 8
// Aluno: Izaias Machado Pessoa Neto
// Data: 23/06/2020

#include <stdio.h>

int main() {
    int n = 5, a;
    double v[n];

    do {
        printf("Digite %d numeros reais: ", n);

        for (int i = 0; i < n; i++) {
            scanf("%lf", &v[i]);
        }

        printf("Digite 0 para terminar, 1 para ordem direta e 2 para inversa: ");
        scanf("%d", &a);

        switch (a) {
        case 0:
            printf("Ok, algoritmo terminado!\n");
            return 0;

            break;
        case 1:
            for (int i = 0; i < n; i++) {
                printf("%.2lf%c", v[i], (i == (n - 1)) ? '\n' : ' ');
            }

            break;
        case 2:
            for (int i = (n - 1); i >= 0; i--) {
                printf("%.2lf%c", v[i], (i == 0) ? '\n' : ' ');
            }

            break;

        default:
            printf("Algo de errado nao esta certo. Tente novamente!\n");
            break;
        }
        
    } while(a != 0);

    return 0;
}
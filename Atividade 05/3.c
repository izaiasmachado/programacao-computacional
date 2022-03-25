// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 3 - Atividade 5
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main() {
    int op;
    double aresta, aresta2, aresta3, raio, altura;
    char c;
    
    while(1) {
        printf("|===============================|\n");
        printf("|Tabela de Formas Geometricas 3D|\n");
        printf("|===============================|\n");
        printf("|  Codigo  |  Forma             |\n");
        printf("|===============================|\n");
        printf("|     1    |  Cubo              |\n");
        printf("|     2    |  Paralelepipedo    |\n");
        printf("|     3    |  Cilindro          |\n");
        printf("|     4    |  Cone              |\n");
        printf("|===============================|\n");
        printf("Escreva o codigo da forma e digite as informacoes pedidas para calcular o volume.\n");

        scanf("%d", &op);
        system("cls");

        switch(op) {
            case 1:
                printf("Voce selecionou o cubo\n");
                printf("Digite a aresta da figura: ");
                scanf("%lf", &aresta);
                printf("O volume do cubo eh de %.2lf u.v.\n", pow(aresta, 3));
            break;
            
            case 2:
                printf("Voce selecionou o paralelepipedo\n");

                printf("Digite a aresta do primeiro lado da figura: ");
                scanf("%lf", &aresta);

                printf("Digite a aresta do segundo lado da figura: ");
                scanf("%lf", &aresta2);

                printf("Digite a aresta do terceiro lado da figura: ");                
                scanf("%lf", &aresta3);

                printf("O volume do cubo eh de %.2lf u.v.\n", (aresta * aresta2 * aresta3));
            break;

            case 3:
                printf("Voce selecionou o cilindro\n");

                printf("Digite o raio da base da figura: ");
                scanf("%lf", &raio);

                printf("Digite a altura da figura: ");
                scanf("%lf", &altura);

                printf("O volume do cubo eh de %.2lf u.v.\n", (PI * pow(raio, 2) * altura));
            break;

            case 4:
                printf("Voce selecionou o cone\n");

                printf("Digite o raio da base da figura: ");
                scanf("%lf", &raio);

                printf("Digite a altura da figura: ");
                scanf("%lf", &altura);

                printf("O volume do cubo eh de %.2lf u.v.\n", ((PI * pow(raio, 2) * altura) / 3));
            break;

            default:
                printf("Digite um codigo valido e tente novamente.\n");
            break;
        }

        printf("Deseja continuar? (s/n):");
        scanf(" %c", &c);
        system("cls");

        if (c == 'n') {
            printf("Programa finalizado.");
            return 0;
        }
    }
}
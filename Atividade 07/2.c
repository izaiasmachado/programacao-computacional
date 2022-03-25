// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 2 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

double mA(double a, double b, double c) {
    return ((a + b + c) / 3);
}

double mP(double a, double b, double c) {
    return ((a * 5 + b * 3 + c * 2) / 10);
}

double mH(double a, double b, double c) {
    return (3 / (((1 / a) * (1 / b) * (1 / c))));
}

double optHandler(double a, double b, double c, char opc) {
    char o = toupper(opc);

    switch (o) {
        case 'A':
            return mA(a, b, c);
            break;
        case 'P':
            return mP(a, b, c);
            break;
        case 'H':
            return mH(a, b, c);
            break;
        default:
            return -1;
            break;
    }
}

int main() {
    double a, b, c, ans;
    char o;

    printf("Digite as 3 notas: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("A - Media Aritimetica\n");
    printf("P - Media Ponderada\n");
    printf("H - Media Harmonica\n");
    printf("Digite uma das opcoes: ");
    scanf(" %c", &o);

    ans = optHandler(a, b, c, o);

    system("cls");

    (ans == -1) ? 
    printf("Digite uma opcao valida!\n") : 
    printf("O resultado da sua media foi %.2lf\n", ans);

    return 0;
}
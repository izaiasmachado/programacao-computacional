// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 9 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdio.h>

char tipos[3][20] = { "equilatero", "isoceles", "escaleno" };

int ehTriangulo(int a, int b, int c) {
    return (((a + b) >= c) && ((b + c) >= a) && ((a + c) >= b));
}

int tipoTriangulo(int a, int b, int c) {
    return (a == b && b == c) ? 0 : ((((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a))) ? 1 : 2);
}

int handleTriangulo(int a, int b, int c) {
    return (ehTriangulo(a, b, c)) ? tipoTriangulo(a, b, c) : -1;
}

int main() {
    int x, y, z;

    printf("Digite tres lados de um triangulo ");
    scanf("%d %d %d", &x, &y, &z);

    int ans = handleTriangulo(x, y, z);
    printf("Seu triangulo eh %s\n", ((ans == -1) ? "invalido :/" : tipos[ans]));

    return 0;
}
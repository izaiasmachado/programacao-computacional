// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 1 - Atividade 5
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>

int main() {   
    double a, b, ans;
    int op;

    printf("\n===== Codigo das Operacoes =====\n 1 - Media simples\n 2 - Diferenca\n 3 - Produto\n 4 - Divisao\n");
    printf("Digite, respectivamente dois numeros e o codigo da operacao deseja, seguindo a tabela: ");
    scanf("%lf %lf %d", &a, &b, &op);

    switch (op) {
    case 1:
        printf("A resposta da sua operacao foi: %.2lf\n", ((a + b) / 2));
        break;
    case 2:
        printf("A resposta da sua operacao foi: %.2lf\n", (a - b));
        break;
    case 3:
        printf("A resposta da sua operacao foi: %.2lf\n", (a * b));
        break;
    case 4:
        printf("A resposta da sua operacao foi: %.2lf\n", (a / b));        
        break;
    default:
        printf("Operacao invalida! Tente novamente.\n");
        break;
    }

    return 0;
}
// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 2 - Atividade 5
// Aluno: Izaias Machado Pessoa Neto
// Data: 11/05/2020

#include <stdio.h>

int main() {   
    double val = 0;
    int op;

    printf("|===========================================|\n");
    printf("|     Cardapio da Barraquinha do Lanche     |\n");
    printf("|===========================================|\n");
    printf("|Codigo |  Produto         | Preco Unitario |\n");
    printf("|===========================================|\n");
    printf("|  100  |  Cachorro Quente | R$ 1.70        |\n");
    printf("|  101  |  Bauru simples   | R$ 2.30        |\n");
    printf("|  102  |  Bauru com ovo   | R$ 2.60        |\n");
    printf("|  103  |  Hamburger       | R$ 2.40        |\n");
    printf("|  104  |  Cheeseburger    | R$ 2.50        |\n");
    printf("|  105  |  Refrigerante    | R$ 1.00        |\n");
    printf("|===========================================|\n");
    printf("Seja bem vindo a barraquinha, peça quantos lanches quiser de acordo com o cardapio. Ao terminar seu pedido digite 0.\n");
    printf("Faca seu pedido: ");

    while (scanf("%d", &op) && (op != 0)) {
        switch (op) {
            case 100:
                val += 1.7;
                break;
            case 101:
                val += 2.3;
                break;
            case 102:
                val += 2.6;
                break;
            case 103:
                val += 2.4;
                break;
            case 104:
                val += 2.5;
                break;
            case 105:
                val += 1;
                break;
            default:
                printf("Digite um codigo valido e tente novamente.\n");
                break;
        }
    }

    (val != 0) ? printf("O total do seu pedido foi de %.2lf reais.", val) : printf("Espero que faca um pedido na proxima."); 
    printf("\nObrigado por frequentar a Barraquinha do Lanche!\n");

    return 0;
}
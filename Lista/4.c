// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 4 - Lista 1
// Aluno: Izaias Machado Pessoa Neto
// Data: 26/07/2020

#include <stdio.h>

int alturaArvoreUtopica(int ciclos) {
    int tamanho = 0;

    for (int i = 0; i <= ciclos; i++) {
        tamanho = (tamanho % 2 == 0) ? tamanho + 1 : tamanho * 2;
    }

    return tamanho;
}

int main() {
    int n, altura;

    printf("Digite a quantidade de ciclos da sua arvore: ");
    scanf("%d", &n);

    altura = alturaArvoreUtopica(n);
    printf("Sua arvore agora tem %d metro%s\n", altura, (altura > 1) ? "s." : ".");

    return 0;
}
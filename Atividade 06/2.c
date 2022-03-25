// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 2 - Atividade 6
// Aluno: Izaias Machado Pessoa Neto
// Data: 05/06/2020

#include <stdio.h>

int main() {
    printf("Numeros divisiveis por 5 entre 1 e 100: ");
    
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
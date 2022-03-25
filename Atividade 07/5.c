// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 5 - Atividade 7
// Aluno: Izaias Machado Pessoa Neto
// Data: 13/06/2020

#include <stdio.h>
#include <string.h>

char categories[5][20] = { "Infantil A", "Infantil B", "Juvenil A", "Juvenil B", "Adulto" };

int categorize(int a) {
    if (a >= 5 && a <= 7) {
        return 0;
    } else if (a >= 8 && a <= 10) {
        return 1;
    } else if (a >= 11 && a <= 13){ 
        return 2;
    } else if (a >= 14 && a <= 17) {
        return 3;
    } else if (a >= 18) {
        return 4;
    } else {
        return -1;
    }
}

int main() {
    int age, ans;

    printf("Digite a idade: ");
    scanf("%d", &age);

    ans = categorize(age);

    (ans == -1) ? 
    printf("Voce precisa ter ao menos 5 anos para participar da natacao :/") :
    printf("Sua categoria eh %s", categories[ans]); 

    return 0;
}
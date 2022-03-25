// Disciplina: SBL0086 - Programação Computacional
// Professor: Danilo Alves
// Descrição: Questão 8 - Atividade 10
// Aluno: Izaias Machado Pessoa Neto
// Data: 10/07/2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * M_PI * pow(R, 2);
    *volume = (4 * M_PI * pow(R, 3)) / 3;
}

int main() {
    float raio, area, volume;
  
    printf("Digite o raio de sua esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);
    printf("AREA = %f\nVOLUME = %f\n", area, volume);

    return 0;
}
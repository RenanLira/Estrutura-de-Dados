#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4 * 3.14 * pow(raio, 3)) / 3;

    printf("O volume dessa esfera e de: %0.2f", volume);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    float velocidade_kmh, velocidade_ms;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6;

    printf("%0.2f km/h e igual a: %0.2f m/s", velocidade_kmh, velocidade_ms);

    return 0;
}
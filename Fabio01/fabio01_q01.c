#include <stdio.h>
#include <stdlib.h>

int main(){
    float velocidade_ms, velocidade_kmh;

    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &velocidade_ms);

    velocidade_kmh = velocidade_ms * 3.6;

    printf("%0.2f m/s e igual a: %0.2f km/h", velocidade_ms, velocidade_kmh);

    return 0;
}
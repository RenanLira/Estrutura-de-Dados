#include <stdio.h>
#include <stdlib.h>

int main(){
    float raio, comprimento;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    comprimento = 2 * 3.14 * raio;

    printf("O comprimento e: %0.2f", comprimento);


    return 0;
}
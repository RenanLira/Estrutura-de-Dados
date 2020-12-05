#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor_dolar, dolar, real;

    printf("Digite a cotacao do dolar para real: ");
    scanf("%f", &valor_dolar);

    printf("Digite um valor em dolar: ");
    scanf("%f", &valor_dolar);

    real = dolar * valor_dolar;

    printf("$ %0.2f para real: R$ %0.2f", dolar, real);


    return 0;
}
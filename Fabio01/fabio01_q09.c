# include <stdio.h>
#include <stdlib.h>

int main(){
    float base, altura, area;

    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    area = (base*altura) / 2;

    printf("a area do triangulo e: %0.2f", area);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    float base, altura, area;

    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &altura);

    area = base * altura;

    printf("A area do retangulo e: %0.2f", area);

    return 0;
}
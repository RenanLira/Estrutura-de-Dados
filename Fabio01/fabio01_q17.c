#include <stdio.h>
#include <stdlib.h>

int main(){
    float kg, g;

    printf("Digite um valor em kg: ");
    scanf("%f", &kg);

    g = kg * 1000;

    printf("%0.2f kg equivale a %0.2f gramas", kg, g);

    return 0;
}
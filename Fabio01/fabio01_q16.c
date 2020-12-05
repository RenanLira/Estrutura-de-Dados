#include <stdio.h>
#include <stdlib.h>

int main(){
    float km, m;

    printf("Digite um valor em km: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("%0.2f km equivale a %0.2f metros", km, m);

    return 0;
}
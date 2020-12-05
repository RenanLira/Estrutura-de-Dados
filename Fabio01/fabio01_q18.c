#include <stdio.h>
#include <stdlib.h>

int main(){
    float cm, m;

    printf("Digite um valor em metros: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("%0.2f metros equivale a %0.2f cm", m, cm);

    return 0;
}
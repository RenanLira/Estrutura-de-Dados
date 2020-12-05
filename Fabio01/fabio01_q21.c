#include <stdio.h>
#include <stdlib.h>

int main(){
    int meses, anos, resto_meses;

    printf("Digite um numero de meses: ");
    scanf("%d", &meses);

    anos = meses / 12;
    resto_meses = meses % 12;

    printf("equivale a %d anos e %d meses", anos, resto_meses);

    return 0;
}
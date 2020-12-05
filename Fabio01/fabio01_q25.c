#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade_dias, anos, meses, dias;

    printf("Digite sua idade em dias: ");
    scanf("%d", &idade_dias);

    anos = idade_dias / 365;
    meses = (idade_dias % 365) / 31;
    dias = idade_dias % 31;

    printf("equivale a %d anos, %d meses, %d dias", anos, meses, dias);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int metros, km, resto_m;

    printf("Digite um valor em metros: ");
    scanf("%d", &metros);

    km = metros / 1000;
    resto_m = metros % 1000;

    printf("Equivale a %d km e %d metros", km, resto_m);

    return 0;
}
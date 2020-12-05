#include <stdio.h>
#include <stdlib.h>

int main(){
    int minutos, dias, horas, resto_minutos;

    printf("Digie um valor em minutos: ");
    scanf("%d", &minutos);

    dias = minutos / 1440;
    horas = (minutos % 1440) / 60;
    resto_minutos = minutos % 60;

    printf("equivale a %d dias, %d horas, %d minutos", dias, horas, resto_minutos);

    return 0;
}
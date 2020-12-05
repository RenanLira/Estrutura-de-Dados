#include <stdio.h>
#include <stdlib.h>

int main(){
    int horas, semanas, dias, resto_hrs;

    printf("Digite uma quantidade de horas: ");
    scanf("%d", &horas);

    semanas = horas / 168;
    dias = (horas % 168) / 24;
    resto_hrs = (horas % 24);

    printf("equivale a: %d semanas, %d dias e %d horas", semanas, dias, resto_hrs);

    return 0;
}
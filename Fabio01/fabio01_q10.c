#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float lado;
    double area;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area = pow(lado, 2);

    printf("o lado do quadrado e: %0.2f", area);

    return 0;
}
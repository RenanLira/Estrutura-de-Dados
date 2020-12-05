#include <stdio.h>
#include <stdlib.h>

int main(){
    float c, f;

    printf("Escreva uma temperatura em graus C: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("%0.2f C e o equivalente a %0.2f F", c, f);

    return 0;
}
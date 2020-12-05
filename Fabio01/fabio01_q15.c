#include <stdio.h>
#include <stdlib.h>

int main(){
    float c, f;

    printf("Escreva uma temperatura em graus F: ");
    scanf("%f", &f);

    c = (5 * f - 160) / 9;

    printf("%0.2f F e o equivalente a %0.2f C", f, c);

    return 0;
}
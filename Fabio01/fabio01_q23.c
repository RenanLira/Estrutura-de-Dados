#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, media;

    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 +n3) / 3;

    printf("A media dos numeros eh %0.2f", media);

    return 0;
}
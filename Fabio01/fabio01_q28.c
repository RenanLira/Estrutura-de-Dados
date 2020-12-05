#include <stdio.h>
#include <stdlib.h>

int main(){
    float cobre, zinco, latao;

    printf("Digite a quantidade de latao em kg: ");
    scanf("%f", &latao);

    cobre = latao * 0.70;
    zinco = latao * 0.30;

    printf("eh necessario %0.2f Kg de cobre e %0.2f Kg de zinco para %0.0f kg de latao", cobre, zinco, latao);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    float custo_fabrica, percent_distribuidor, impostos, preco_consumidor;

    printf("Digite o custo da fabrica: ");
    scanf("%f", &custo_fabrica);

    percent_distribuidor = custo_fabrica * 0.28;
    impostos = custo_fabrica * 0.45;
    preco_consumidor = custo_fabrica + percent_distribuidor + impostos;

    printf("O preco final para o consumidor eh de R$ %0.2f", preco_consumidor);

    return 0;
}
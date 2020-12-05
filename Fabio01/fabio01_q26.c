#include <stdio.h>
#include <stdlib.h>

int main(){
    int anos_fumando, cigarros_por_dia;
    float preco_cigarro, preco_carteira, gasto_diario, gasto_anual, total_gasto;

    printf("Digite a quantidade de anos fumando: ");
    scanf("%d", &anos_fumando);

    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarros_por_dia);

    printf("Digite o preco de uma carteira de cigarros(20 unidades): ");
    scanf("%f", &preco_carteira);

    preco_cigarro = preco_carteira / 20;
    gasto_diario = preco_cigarro * cigarros_por_dia;
    gasto_anual = gasto_diario * 365;
    total_gasto = gasto_anual * anos_fumando;

    printf("O fumante gastou um total de %0.2f R$", total_gasto);

    return 0;
}
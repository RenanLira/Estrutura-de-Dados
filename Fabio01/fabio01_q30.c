#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor_produto, entrada, prestacoes;

    printf("Digite o preco do produto: R$ ");
    scanf("%d", &valor_produto);

    entrada = (valor_produto / 3) + (valor_produto % 3);
    prestacoes = (valor_produto - entrada) / 2;

    printf ("O valor do produto eh R$ %d\nentrada R$ %d\n2 prestacoes de R$ %d", valor_produto, entrada, prestacoes);

    return 0;
}
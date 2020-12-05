#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor, novo_valor, porcentagem;
    porcentagem = 0.70;

    printf("Digite um valor: R$ ");
    scanf("%f", &valor);

    novo_valor = valor * porcentagem;

    printf("70%% desse valor equivale a: R$ %0.2f", novo_valor);

    return 0;
}
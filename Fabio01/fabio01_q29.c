#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor_saque, nota_50, nota_20, nota_10, nota_5, nota_2;

    printf("Quanto deseja sacar: ");
    scanf("%d", &valor_saque);

    nota_50 = valor_saque / 50;
    nota_20 = (valor_saque % 50) / 20;
    nota_10 = (valor_saque % 20) / 10;
    nota_5 = (valor_saque % 10) / 5;
    nota_2 = valor_saque % 5;

    printf("%d notas de R$ 50\n%d notas de R$ 20\n%d notas de R$ 10\n%d notas de R$ 5\n%d notas de R$ 2", nota_50, nota_20, nota_10, nota_5, nota_2);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade_anos, idade_meses, idade_dias, total_ano, total_meses, dias_totais;

    printf("DIgite sua idade em anos meses e dias (ex: 19 2 1): ");
    scanf("%d %d %d", &idade_anos, &idade_meses, &idade_dias);


    total_ano = idade_anos * 365;
    total_meses = idade_meses * 30;
    dias_totais = total_ano + total_meses + idade_dias;
    
    printf("%d anos %d meses e %d dias equivalem a %d dias", idade_anos, idade_meses, idade_dias, dias_totais);

    return 0;
}
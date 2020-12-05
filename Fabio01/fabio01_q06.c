#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, novo_salario, porcentagem;

    porcentagem = 0.25;

    printf("Salario atual: ");
    scanf("%f", &salario);

    novo_salario = salario + (salario * porcentagem);

    printf("Seu novo salario e (+25%%): R$ %0.2f", novo_salario);
    
    return 0;
}
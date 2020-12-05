#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, quociente, resto_divisao;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    quociente = num1 / num2;
    resto_divisao = num1 % num2;

    printf("Quociente: %d\nResto da divisao: %d", quociente, resto_divisao);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, pos1, pos2, pos3;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);

    pos1 = num / 100;
    pos2 = (num % 100) / 10;
    pos3 = num % 10;

    printf("%d%d%d", pos3, pos2, pos1);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    printf("Digite as 3 notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite os pesos das notas do aluno: ");
    scanf("%d %d %d", &peso1, &peso2, &peso3);

    media = ((peso1 * nota1)+(peso2 * nota2)+(peso3 * nota3)) / (peso1 + peso2 + peso3);

    printf("A media do aluno e: %0.2f", media);

    return 0;
}
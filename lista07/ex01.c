#include<stdio.h>
#define NUM 10

int main(void) {
    int idade;
    float altura;
    char inicial;
    int *pi = &idade;
    float *pa = &altura;
    char *pin = &inicial;

    printf("Digite sua idade, sua altura e a inicial do seu nome :\n");
    scanf("%d %f %c", &idade, &altura, &inicial);

    printf("Digite sua idade alterada e [%d], sua altura altera e [%f] a inicial do seu nome alterada e [%c] :\n",*pi + NUM, *pa + NUM, *pin + NUM);

    return 0;
}
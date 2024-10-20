#include<stdio.h>

void troca(int *n1, int *n2) {
    int x;
    x = *n1;
    *n1 = *n2;
    *n2 = x;
}

int main(void) {
    
    int a, b;
    printf("Digite um valor para A: \n Digite um valor para B:\n");
    scanf("%d%d", &a, &b);

    troca(&a, &b);

    printf("Valores trocados por meio de uma funcao!");
    printf("O valor para A agr eh:%d \n Ovalor para B agr eh:%d\n", a, b);
    return 0;
}
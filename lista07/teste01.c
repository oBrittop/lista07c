#include<stdio.h>
#include <conio.h>

int main(void){
    int n1 , n2, m;
    printf("Digite a nota 1 e 2:");
    scanf("%d%d", &n1, &n2);

    m = (n1+n2) / 2;

    if (m >= 7)
    {
    printf("Aprovado!");

    }else
    {printf("ReprovadO!");
    }


    return 0;
}
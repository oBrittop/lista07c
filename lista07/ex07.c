#include<stdio.h>
#include<stdlib.h>

void verificador(float num, int* inteiro, float* frac){
*inteiro = num;
*frac = num - *inteiro;

}

int main(){
    float num, frac;
    int inteiro = 0;

    printf("Digite um numero real:\n");
    scanf("%f",&num);


    verificador(num, &inteiro, &frac);

    printf("A parte interia do numero eh:%d \n E a fracao eh:%f", inteiro, frac );





return 0;
}
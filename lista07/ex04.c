#include<stdio.h>


int main(void) {
    

    double vetor[10] = {0,1,2,3,4,5,6,7,8,9,};
    int i;

    printf("A seguir o endereco dos 10 elemntos do vetor tipo float :\n");

    for (i = 0; i < 10; i++)
    {
        printf("%lf\n", &vetor[i]);
    }
    
    
    return 0;
}
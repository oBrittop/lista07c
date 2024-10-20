#include<stdio.h>

int main(void) {

    float matirz [3] [3];
    int i, j;

    printf("A seguir o endereco dos 9 elemntos da matriz tipo float :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Referente ao espaco [%d] [%d] o endereco :%f \n",i , j, &matirz[i][j]);
        }
        
    }
    



    return 0;
}
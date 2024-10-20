#include<stdio.h>
#include<stdlib.h>


void verificador(char v1[], char v2[], char v3[]) {
    int i, j, k = 0;
    for (i = 0; v1[i] != '\0'; i++)
    {
        for (j = 0; v2[j] != '\0'; j++)
        {
            if (v1[i] == v2[j])
            {
                v3[k++] = v2[j];
                v3[1] = '\0';
                return;
            }
            
        }
        
    }
    v3[k] = '\0';
}

int main(){

     char vetor1[101] = {0}, vetor2 [30] = {0}, vetor3 [30] = {0};

     printf("Digite uma frase maximo 100:\n");
     scanf("%100[^\n]", vetor1);

     while (getchar() != '\n');
     printf("Digite uma palavra : \n");
     scanf("%30[^\n]", vetor2);
     
     verificador(vetor1, vetor2, vetor3);

     printf("A frase eh : %s \n E a palavra eh :%s\n", vetor1, vetor2);
     printf("O que se repete eh : %s \n", vetor3);

    return 0;
}
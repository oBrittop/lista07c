#include<stdio.h>

int main(void) {
    int a, b;
    if (&a > &b)
    {
        printf("O maior endereco pertence a vairiavel a i eh :%d \n", &a);
        return 0;
    }
    printf("O maior endereco pertence a vairiavel b i eh :%d \n", &b);
    


    return 0;
}
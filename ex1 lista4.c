#include <stdio.h>
#include <stdlib.h>

/*Faça uma função que receba 3 números e retorne para o programa principal os 3 números em ordem crescente. Mostre o resultado no programa  principal. */

void retornaNum(int a, int b, int c, int *ma, int *med, int *men);

void main()
{
    int a,b,c,maior,medio,menor;
    printf("\nDigite o numero A: ");
    scanf("%d",&a);
    printf("\nDigite o numero B: ");
    scanf("%d",&b);
    printf("\nDigite o numero C: ");
    scanf("%d",&c);
    retornaNum(a,b,c,&maior,&medio,&menor);
    printf("\n%d %d %d",menor,medio,maior);
}

void retornaNum(int a, int b, int c, int *ma, int *med, int *men){
    *ma = a;
    *med = a;
    *men = a;
    if(b>*ma){
        *ma = b;
    }
    else{
        *med=b;
        *men=b;
    }
    if(c>*ma){
        *ma = c;
    }
    else if(c<*ma && c>*med){
        *med=c;
    }
    else{
        *men=c;
    }
}

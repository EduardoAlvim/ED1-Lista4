#include <stdio.h>
#include <stdlib.h>

/*Sabendo que a função strlen conta a quantidade de caracteres que a string possui,
faça uma função que imite-a. */

int quant(char str[]);

void main()
{
    char str[100];
    printf("\nDigite sua string: ");
    gets(str);
    printf("\nTamanho da string: %d",quant(str));
}

int quant(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

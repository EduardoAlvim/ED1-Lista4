#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sabendo que a função strcat concatena duas strings, faça uma função que imite-a

void concat(char str1[],char str2[]);

void main()
{
    char str1[100], str2[100];
    printf("\nFrase 1:");
    gets(str1);
    printf("\nFrase 2:");
    gets(str2);
    concat(str1,str2);
    printf("\n%s",str1);
}

void concat(char str1[], char str2[])
{
    int tamfinal, cont=0, trem;
    tamfinal = strlen(str1) + strlen(str2);
    for(int i=strlen(str1);i<=tamfinal;i++){
        str1[i]=str2[cont];
        cont++;
    }
}

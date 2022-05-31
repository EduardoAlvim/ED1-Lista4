#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie uma fun��o que receba dois nomes e retorne quantas letras s�o vogais. Use uma
outra fun��o que verifica se � uma vogal. */

int retornaVogais(char f1[], char f2[]);
int verifica(char c);

void main()
{
    char f1[100], f2[100];
    int vogais;
    printf("\nFrase 1:");
    gets(f1);
    printf("\nFrase 2:");
    gets(f2);
    vogais = retornaVogais(f1,f2);
    printf("\nTotal de vogais: %d",vogais);
}

int retornaVogais(char f1[], char f2[])
{
    int retorno=0;
    char x;
    for(int i =0; i<strlen(f1); i++)
    {
        char x = f1[i];
        if(verifica(x)==1)
        {
            retorno++;
        }
    }
    for(int i =0; i<strlen(f2); i++)
    {
        char x = f2[i];
        if(verifica(x)==1)
        {
            retorno++;
        }
    }
    return retorno;
}

int verifica(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c== 'o' || c== 'u')
    {
        return 1;
    }
    return 0;

}



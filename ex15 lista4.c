#include <stdio.h>
#include <stdlib.h>

/* Faça uma função que receba uma string e duas palavras, a primeira palavra será a palavra a ser buscada na string
e a segunda palavra a ser inserida no lugar da primeira, mostre o resultado no programa principal.
Exemplo: Original : O rato tem medo do gato. O gato tem medo do cachorro!
Primeira palavra ( a ser substituida): gato
Segunda palavra ( a substituir): sapo
Resultado: O rato tem medo do sapo. O sapo tem medo do cachorro! */

void substituiPalvra(char frase[], char palavra[], char frasef[]);
int quant(char str[]);

void main()
{
    printf("Hello world!\n");
}

void substituiPalvra(char frase[], char palavras[],char palavra[], char frasef[])
{
    char palavraaux[100];
    int cont1=0, cont2=0, cont3=0;
    while(frase[cont1] != '\0')
    {
        if(frase[cont1] != ' ')
        {
            palavraaux[cont2] = frase[cont1];
            cont2++;
            frasef[cont3] = frase[cont1];
            cont3++;
        }
        else
        {
            frasef[cont3] = ' ';
            cont3++;
            if(palavraaux == palavras){
                for(int i=0; i<quant(palavra); i++)
            {
                frasef[cont3] = palavra[i];
                cont3++;
            }
            }
            for(int i=0; i<cont2; i++)
            {
                frasef[cont3] = palavra[i];
                cont3++;
            }
            frasef[cont3]= ' ';
            cont3++;
            cont2=0;
        }
        cont1++;
    }
}

int quant(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

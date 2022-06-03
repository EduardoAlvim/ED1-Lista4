#include <stdio.h>
#include <stdlib.h>

/*Faça uma função que receba uma string e dobre todas as palavras existentes, mostre o resultado no programa principal. 
Exemplo: Original : O rato roeu a roupa do rei de roma Resultado: O O rato rato roeu roeu a a roupa roupa do do rei rei de de roma roma */

void retornaFrase(char frase[], char frasef[]);

void main()
{
    char frase[100], frasef[500];
    printf("\nDigite sua frase: ");
    gets(frase);
    retornaFrase(frase, frasef);
    printf("\nFrase final: ");
    puts(frasef);
}

void retornaFrase(char frase[], char frasef[])
{
    char palavra[100];
    int cont1=0, cont2=0, cont3=0;
    while(frase[cont1] != '\0')
    {
        if(frase[cont1] != ' ')
        {
            palavra[cont2] = frase[cont1];
            cont2++;
            frasef[cont3] = frase[cont1];
            cont3++;
        }
        else
        {
            frasef[cont3] = ' ';
            cont3++;
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
    frasef[cont3] = ' ';
    cont3++;
    for(int i=0; i<cont2; i++)
    {
        frasef[cont3] = palavra[i];
        cont3++;
    }
    frasef[cont3] = '\0';
}

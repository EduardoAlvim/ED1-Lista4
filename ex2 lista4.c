#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Desenvolva um programa para testar as funções a seguir:
 Uma função que receba dois números a e b, em seguida, faça a troca
destes dois números. Dica: a e b devem ser passados por referência.
 Uma função que receba dois números a e b, em seguida, decremente
o primeiro e incremente o segundo. Dica: a e b devem ser passados
por referência.
 Uma função que receba os valores a, b e c passados por valor, receba
também dois valores x1 e x2 passados por referência. Em seguida,
calcule e retorne as duas raízes da equação do segundo grau nas
variáveis x1 e x2.
 */

void func1(int *a, int *b);
void func2(int *a, int *b);
void func3(int a, int b, int c, float *x1, float *x2);

void main()
{
    int a,b,c;
    float x1,x2;
    printf("\nDigite o valor de A:");
    scanf("%d",&a);
    printf("\nDigite o valor de B:");
    scanf("%d",&b);
    printf("\nDigite o valor de C:");
    scanf("%d",&c);
    func1(&a, &b);
    printf("\nResultado funcao 1: %d e %d",a,b);
    func2(&a, &b);
    printf("\nResultado funcao 2: %d e %d",a,b);
    func3(a, b, c, &x1, &x2);
    printf("\nResultado funcao 3: %d e %d",x1,x2);
}

void func1(int *a, int *b){
    int x;
    x=*a;
    *a=*b;
    *b=x;
}

void func2(int *a, int *b){
    *a = *a-1;
    *b = *b+1;
}

void func3(int a, int b, int c, float *x1, float *x2){
    *x1 = -b + sqrt(b*b-4*a*c)/2*a;
    *x1 = -b - sqrt(b*b-4*a*c)/2*a;
}

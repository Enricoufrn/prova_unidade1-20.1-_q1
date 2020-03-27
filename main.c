#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,nd,i;
    printf("digite o numero a ser exibido em binario: ");
    scanf("%d",&n);
    //printf("n = %d, nd = %d, i = %d",n,nd,i);
    printf("byte 1 = ");
    for(i=31;i>=24;i--)
    {
        nd = n>>i; // nd = numero deslocado
        // deslocando n em i vezes, "jogamos" os ulimos bit da esquerda para direita, do respectivo byte,
        // sendo assim podemos comparar, utilizando o "e" lógico, com o número 1, que só retornará 1 quando o
        // primeiro bit da esquerda for 1 também.
        if(nd & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    printf("byte 2 = ");
    for(i=23;i>=16;i--)
    {
        nd = n>>i;
        if(nd & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }


    }
    printf("\n");
    printf("byte 3 = ");
    for(i=15;i>=8;i--)
    {
        nd = n>>i;
        if(nd & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }


    }
    printf("\n");
    printf("byte 4 = ");
    for(i=7;i>=0;i--)
    {
        nd = n>>i;
        if(nd & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }


    }
    printf("\n");
    return 0;
}

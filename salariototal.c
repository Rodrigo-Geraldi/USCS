/******************************************************************************

Rodrigo Oliveira Geraldi 01/09
Lista de Exercicio - exercicio 5 - calculo de salário total

*******************************************************************************/
#include <stdio.h>

int main()
{
   float salFixo, valorV, salTotal;
   printf("Digite seu salário: ");
   scanf("%f", &salFixo);
   printf("Digite as vendas: ");
   scanf("%f", &valorV);
   
   if (valorV > 1500)
    salTotal = 1500 * 3/100 + (valorV - 1500) * 5/100;
   else
    salTotal = 1500 * 3/100;
   
   salTotal = salTotal + salFixo;
   printf("%.2f", salTotal);
} 

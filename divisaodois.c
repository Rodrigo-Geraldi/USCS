/******************************************************************************

Rodrigo Oliveira Geraldi - 01/09
Exercicio 7 - divisão de dois números

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite dois números diferentes de 0: ");
    scanf("%d %d" ,&a, &b );
    
    while(b == 0) {
        printf("Valor inválido: ");
        scanf("%d", &b);
    }
    
    printf("%.1f", (1.0 * a) / (01.0 * b));
}


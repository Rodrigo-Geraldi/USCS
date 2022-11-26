/******************************************************************************

Rodrigo Oliveira Geraldi
Calculadora com entradas do usuário

*******************************************************************************/
#include <stdio.h>

int main()
{
float num1, num2;

printf("Digite dois números diferentes de 0:\n");
scanf("%f %f", &num1, &num2);

printf("\n%.0f", num1 + num2);
printf("\n%.0f", num1 - num2);
printf("\n%.0f", num1 * num2);

if(num2 != 0){
    printf("\n%.0f", num1 / num2);
}

else{
    printf("\nNão é possivel dividir por 0");
}
    return 0;
}

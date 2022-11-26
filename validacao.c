/******************************************************************************

Rodrigo Oliveira Geraldi - 13/10
Calculo de dias vivos e validação de dados

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int idade;
    char sexo;
    
    //Entrada
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    //Processamento
    while (idade < 0 || idade > 120) {
        printf("Valor inválido, digite novamente: ");
        scanf("%d", &idade);
    }
    
    printf("\nDigite seu sexo: ");
    scanf("%c", &sexo);
    
    while (sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f'){
        printf("\nValor inválido, digite novamente: ");
        scanf("%c", &sexo);
    }
    
    //Saída
    printf("Você está vivo a %d dias", idade * 365);
}


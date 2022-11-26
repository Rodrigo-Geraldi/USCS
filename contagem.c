/******************************************************************************

Rodrigo Oliveira Geraldi - 13/10
Contagem regressiva (negativa ou positiva)

*******************************************************************************/
#include <stdio.h>

//Contagem positiva
void contagemPositiva(int num){
    for(int i = num; i >= 0; i--){
        printf("\n%d", i);
    }
}

//Contagem negativa    
void contagemNegativa(int num){
    for (int i = num; i <= 0; i++){
        printf("\n%d", i);
    }
}    
 
//Verificação    
void contagemRegressiva(int num){
    if(num >= 0){
        contagemPositiva(num);
    }
    
    else {
        contagemNegativa(num);
    } 
}

int main()
{

//Variável    
int num;
    
//Entrada
printf("Digite um número: ");
scanf("%d", &num);
    
//Saída
contagemRegressiva(num);
}



/******************************************************************************

Rodrigo Oliveira Geraldi
Vetor e média

*******************************************************************************/
#include <stdio.h>
#define TAMANHO 10

int main(){

int v[TAMANHO], s = 0, media, num, igual = 0;

for (int i = 0; i < TAMANHO; i++){
    printf("Digite V[%d]: ", i);
    scanf("%d", &v[i]);
    s = s + v[i];
}
    
    media = s / TAMANHO;
    printf("\nA média é: %d", media);
    
    printf("\nOs números maiores que a média são: ");
    for (int i = 0; i < TAMANHO; i++){
        if (v[i] > media){
            printf("\n%d", v[i]);
        }
    } 
    
    printf("\nDigite o número que deseja obter: ");
    scanf("%d", &num);
    
    for(int i = 0; i < TAMANHO; i++){
        if(v[i] == num){
            igual = igual + num;
        }
    }
    
    if(igual == num){
        printf("Está no vetor");
    }
    
    else{
        printf("Não está no vetor");
    }
  
}


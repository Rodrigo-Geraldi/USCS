/******************************************************************************

Rodrigo Oliveira Geraldi 
listagem de bandas 

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define QUANTIDADE 5

typedef struct {
    char nome[50];
    char estilo[20];
    int integrantes;
    int rank;
} Banda;

void listaBandas(Banda *b){
    for (int i = 0; i<QUANTIDADE; i++){
        printf("\n\nBanda %d", i+1);
        printf("\nNome:%s", b[i].nome);
        printf("\nEstilo:%s", b[i].estilo);
        printf("\nIntegrantes:%d", b[i].integrantes);
        printf("\nRanking:%d", b[i].rank);
    }
}    
    void listaBandasRock(Banda *b){
    for (int i = 0; i<QUANTIDADE; i++){
        if(strcmp(b[i].estilo,"Rock")==0){
            printf("\n\nBanda %d", i+1);
            printf("\nNome:%s", b[i].nome);
            printf("\nEstilo:%s", b[i].estilo);
            printf("\nIntegrantes:%d", b[i].integrantes);
            printf("\nRanking:%d", b[i].rank);
        }
    }
}

int main()
{
    Banda banda[QUANTIDADE];
    
    banda[0].integrantes = 4;
    banda[0].rank = 1;
    strcpy (banda[0].nome, "Queen");
    strcpy (banda[0].estilo, "Rock");
    
    banda[1].integrantes = 4;
    banda[1].rank = 4;
    strcpy (banda[1].nome, "The Beatles");
    strcpy (banda[1].estilo, "Rock");
    
    banda[2].integrantes = 4;
    banda[2].rank = 75;
    strcpy (banda[2].nome, "Led Zeppelin");
    strcpy (banda[2].estilo, "Rock");
    
    banda[3].integrantes = 4;
    banda[3].rank = 67;
    strcpy (banda[3].nome, "Pearl Jam");
    strcpy (banda[3].estilo, "Rock");
    
    banda[4].integrantes = 5;
    banda[4].rank = 3;
    strcpy (banda[4].nome, "Linkin Park");
    strcpy (banda[4].estilo, "Rock");
    
    listaBandas(banda);
    
    listaBandasRock(banda);
    return 0;
}


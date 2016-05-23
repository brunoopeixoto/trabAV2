#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //variável
    float av1[30], aux;
    int i, j;
    char nome [30][30];
    char aux2[30];
    
    //nome e nota do aluno
    for(i=0;i<=29;i++)
    {
        printf("\nEntre com o nome %d:", i+1);
        scanf("%s", nome[i]);
        
        printf("\nEntre com a nota do %s:", nome[i]);
        scanf("%f",&av1[i]);
    }
    
    //lista na ordem decrescente
    for(i=0;i<=29;i++)
    {
        for(j=i+1;j<=29;j++)
        {
            if(av1[j]>av1[i])
            {
                aux=av1[j];
                av1[j]=av1[i];
                av1[i]=aux;
                
                strcpy(aux2,nome[j]);
                strcpy(nome[j],nome[i]);
                strcpy(nome[i],aux2);
            }
        }
    }
    //lista com os alunos e as notas
    printf("\nLista da av1");
    printf("\n----------------------------------------------\n");
    printf("\nNome do aluno\tav1\t\n");
    
    for(i=0;i<=29;i++)
    {
        printf("\n\t%s\t%.2f\n",nome[i],av1[i]);
    }
    return 0;
    
    
}
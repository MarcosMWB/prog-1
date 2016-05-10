#include <stdio.h>
int main()
{
 int i, alunos, contador=0;
 float maior, nota[10], media, soma=0;
 
 for(i=0;i<=9;i++)
 {
     do
     {
     printf("entre com a av1 do aluno %d:", i+1);
     scanf("%f", &nota[i]);
     }while(nota[i]>10);
         
    soma=soma+nota[i];
            
    if(nota[i]>maior)
    {
     maior=nota[i];
    }
 }
 
 media=soma/i;
 printf("a media eh:%.2f\n", media);
 
     for(i=0;i<=9;i++)
    {
        if(nota[i]>=media)
        {
           alunos++;
           printf("notas maiores q a media %.2f\n", nota[i]);
        }
        
        if(nota[i] == maior)
        {
            contador++;
        }
        
 }
  printf("a maior nota foi %.2f\n", maior);
  printf("%d tiraram notas maiores que a media\n", alunos);
  printf("%d tiraram a maior nota\n", contador);
return 0;
}

#include <stdio.h>
int main()
{
    float nota[4][3];
    int i, j;
    char nome[4][30];
    
         for(i=0;i<=3;i++)
         {
            printf("nome do aluno %d:", i+1);
            scanf("%s", nome[i]);
                 
             for(j=0;j<=2;j++)
             {
                 printf("entre com as 3 notas do aluno %s:\n", nome[i]);
                 scanf("%f", &nota[i][j]);
             }
         }
         
         printf("nome\tav1\tav2\tav3\n");
         printf("----------------------------");
         
     for(i=0;i<=3;i++)
     {
         printf("\n%s", nome[i]);
         for(j=0;j<=2;j++)
         {
             printf("\t%.2f ",  nota[i][j]);
         }
         printf("\n");
     }
return 0;
}

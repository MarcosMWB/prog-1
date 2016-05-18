#include <stdio.h>
int main()
{
    float nota[4][3];
    int i, j;
         for(i=0;i<=3;i++)
         {
             for(j=0;j<=2;j++)
             {
                 printf("entre com as 3 notas do aluno %d\n", i+1);
                 scanf("%f", &nota[i][j]);
             }
         }
         
         printf("nome\tav1\tav2\tav3\n");
         printf("----------------------------");
         
     for(i=0;i<=3;i++)
     {
         printf("\naluno%d", i+1);
         for(j=0;j<=2;j++)
         {
             printf("\t%.2f ",  nota[i][j]);
         }
         printf("\n");
     }
return 0;
}

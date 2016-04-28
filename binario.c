#include <stdio.h>

int main()
{
     int num, numb, i=0, j;
     int resto [30];
     printf("digite...\n");
     scanf("%d",&numb);
     num = numb;
     do
     {
      resto[i]=numb%2;
      i++;
      numb=numb/2;
     }
     while(numb>0);
     printf("%d em binario é:", num);
     
     for (j=i-1;j>=0;j--)
     {
      printf("%d", resto[j]);
     }
     printf("\n");
     return 0;
}
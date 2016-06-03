#include <stdio.h>

int main()
{
    int i=0, numb, numb1=0, numb2=1, j;
    
printf("ate que numero sera a sequencia de fibonacci?\n");
scanf("%d", &j);

do
{
 numb=numb1;
 printf("%d ", numb);
 numb1=numb2;
 numb2=numb+numb1;
 i++;
}while(numb<=j);
    
    if (numb=j)
    {
      printf("...\n");
    }

return 0;
}

#include <stdio.h>

int main()
{
    int numb, numb1=0, numb2=1, i;
    printf("sequencia de fibonacci");
    for(i=0;i<=20;i++)
    {
      numb=numb1+numb2;
      printf("%d, ",numb);
      numb2=numb1;
      numb1=numb;
    }
    return 0;
}

    
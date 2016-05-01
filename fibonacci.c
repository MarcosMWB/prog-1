#include <stdio.h>

int main()
{
    int i, numb, numb1=1, numb2;

printf("sequencia de fibonacci\n");
    
    for(i=1;i<=20;i++)
    {
        numb=numb1+numb2;
        printf("%d, ", numb);
        numb1=numb2;
        numb2=numb;
    }

return 0;
}

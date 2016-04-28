#include <stdio.h>
int main()
{
    int numb, i, multiplicar,mult;
    printf("diga um numero\n");
    scanf("%d", &numb);
    printf("até quanto?\n");
    scanf("%d", &mult);
    for(i=0;i<=mult;i++)
    {
        multiplicar=numb*i;
        printf("%dx%d=%d\n",numb,i,multiplicar);
    }
    return 0;
}
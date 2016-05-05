#include <stdio.h>

int main()
{
    int i;

    printf("\ntabela ASCII\n");
    printf("\nDEC\tCHAR\n");
    for(i=33;i<=126;i++)
    {
        printf("%d\t%c\n", i, i);
    }
    
    return 0;
}

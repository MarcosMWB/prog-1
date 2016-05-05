#include <stdio.h>

int main()
{
    char fulano[100];
    float av1, av2, media;
    
    printf("nome?\n");
    scanf("%s", fulano);
    printf("av1:");
    scanf("%f", &av1);
    printf("\nav2:");
    scanf("%f", &av2);
    
    media=(av1+av2)/2;
    
    printf("\n%s sua media é %f.", fulano, media);
    
return 0;
}

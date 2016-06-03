#include <stdio.h>
#define PEOPLE 400

int main()
{
    int i=0 , voto;
    float part1=0, part2=0, part3=0, nulo=0;
    while(i<=PEOPLE)
    {
        printf("Qual seu voto? pt.13 fdp.171 noobs.1337 nulo.0\n");
        scanf("%d", &voto);
        if(voto==13)
        {
            part1++;
            i++;
        }
        else if(voto==171)
        {
            part2++;
            i++;
        }
        else if(voto==1337)
        {
            part3++;
            i++;
        }
        else if(voto==0)
        {
            nulo++;
            i++;
        }
        else
           printf("voto invalido!\n");
    }
    
    part1+=(part1*100/PEOPLE);
    part2+=(part2*100/PEOPLE);
    part3+=(part3*100/PEOPLE);
    nulo+=(nulo*100/PEOPLE);
    

    printf("------------------\n");
    printf("partido pt: %.2f%%\n", part1);
    printf("------------------\n");
    printf("partido fdp: %.2f%%\n", part2);
    printf("------------------\n");
    printf("partido noobs: %.2f%%\n", part3);
    printf("------------------\n");
    printf("nulos: %.2f%%\n", nulo);
    printf("------------------\n");
    
    
return 0;
}

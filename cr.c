#include <stdio.h>

int main()
{
    int i=0, sn, k;
    float nota[10], hora[10], cr, carga=0;
    
    do{
        i++;
        printf("qual a nota materia %d? ", i+1);
        scanf("%f", &nota[i]);
        printf("qual a carga horaria desta materia %d? ", i+1);
        scanf("%f", &hora[i]);
        printf("deseja continuar? 0-false 1-true: ");
        scanf("%d", &sn);
    }while(sn);
    
    for(k=0;k<=i;k++)
    {
        nota[k]=nota[k]*hora[k];
        carga=hora[k]+carga;
    }
    for(k=0;k<=i;k++)
    {
        cr=cr+nota[k];
    }
    cr=cr/carga;
    printf("seu cr é %.2f\n", cr);
    
return 0;
}

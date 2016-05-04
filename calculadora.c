#include <stdio.h>

int main()
{
    int numb, numb2, opc, cont;
    float total;
    
    do
    {
        printf("qual operacao vc deseja?\n");
        printf("1 adicao\n");
        printf("2 subtracao\n");
        printf("3 multiplicacao\n");
        printf("4 divisao\n");
        scanf("%d", &opc);
        
        printf("Entre com num1:");
        scanf("%d", &numb);
               
        printf("\nEntre com num2:");
        scanf("%d", &numb2);
        
        switch(opc)
        {
        case 1:
        total=numb+numb2;
        printf("\n%f", total);
        break;
        case 2:
        total=numb-numb2;
        printf("\n%f", total);
        break;
        case 3:
        total=numb*numb2;
        printf("\n%f", total);
        break;
        case 4:
        total=(float)numb/numb2;
        printf("\na resposta é:%f", total);
        break;
        }
        printf("\ndeseja continuar? 1-s ou 2-n\n");
        scanf("%d", &cont);
    }while(cont==1);
    
return 0;
}

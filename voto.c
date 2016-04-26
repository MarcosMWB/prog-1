#include <stdio.h>

 int main()
 {
      int idade;
      printf("qual sua idade?\n");
      scanf("%d", &idade);
      
      if (idade<=15)
      { 
          printf("voce n pode votar\n");
      }
      
       if (idade>=18 && idade<=70)
      { 
          printf("voce eh obrigado a votar\n");
      }
       
       else
      { 
          printf("voto facultativo\n");
      }
      
      return 0;
 }
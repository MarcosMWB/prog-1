#include <stdio.h>

int main()
{
    int l1, l2, l3;

      printf ("Informe o lado 1 do triangulo:\n");
      scanf ("%d", &l1);
      printf ("Informe o lado 2 do triangulo:\n");
      scanf ("%d", &l2);
      printf ("Informe o lado 3 do triangulo:\n");
      scanf ("%d", &l3);
     
      if (l1+l2+l3>=0)
         {
          if (l1==l2&&l2==l3&&l3==l1)
             {
             printf ("Triangulo Equilatero\n");
             }
          else if (l1==l2||l2==l3||l3 ==l1)
             {
             printf ("Triangulo Isosceles\n");
             }
          else if (l1!=l2&&l2!=l3&&l3!=l1)
             {
             printf ("Triangulo Escaleno\n");
             }
         }
      else
          printf ("Valores invalidos para formar um triangulo\n");


return 0;
}

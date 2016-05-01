#include <stdio.h>

int main()
{
    int ano, ano2;
do
{
  printf("qual ano vc nasceu?\n");
  scanf("%d", &ano);
}  while(ano<1000);
  ano2=2016-ano;
  ano=2015-ano;
printf("se vc nasceu depois do mes que estamos vc tem %d se n vc tem %d\n", ano2, ano);

return 0;
}

#include <stdio.h>
int main(){


   int ang1, ang2, ang3;


   printf("Informe o valor do primeiro angulo\n");
   scanf("%d",&ang1);
   printf("Informe o valor do segundo angulo\n");
   scanf("%d",&ang2);
   ang3 = 180 - (ang1 + ang2);

   printf("O valor do terceiro angulo eh de %d\n", ang3);

return 0;
}




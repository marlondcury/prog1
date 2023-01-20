#include <stdio.h>
#define PI 3.14
int main(){


   int raio;
   float comp, area, vol;

   printf("Informe o raio da esfera\n");
   scanf("%d",&raio);
   comp = 2*raio*PI;
   area = PI*raio*raio;
  vol = 4*PI*raio*raio*raio/3;

   printf("O comprimento da circunferencia eh de %lf, sua area eh de %lf e seu volume eh de %lf\n", comp, area, vol);

return 0;
}

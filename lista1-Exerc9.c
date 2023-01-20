#include <stdio.h>

int main(){


   int lado1, lado2, area;


   printf("Informe o comprimento do primeiro lado do quadrado\n");
   scanf("%d",&lado1);
   printf("Informe o comprimento do segundo lado do quadrado\n");
   scanf("%d", &lado2);
   area = lado1*lado2;
   printf("A area do quadrado eh %du.a.", area);

return 0;
}

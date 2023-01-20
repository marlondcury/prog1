#include <stdio.h>

int main(){


   int num1, num2, mult;


   printf("Informe a primeira nota\n");
   scanf("%d",&num1);
   printf("Informe a segunda nota\n");
   scanf("%d",&num2);

   mult= ((num1*2)+(num2*3))/2;

   printf("A media ponderada eh %d\n",mult);

return 0;
}
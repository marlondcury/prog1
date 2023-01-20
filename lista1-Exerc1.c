// Faça um programa em C que receba três números inteiros. Calcule e mostre a
//multiplicação desses números.

#include <stdio.h>

int main(){


   int num1, num2, num3, mult;


   printf("Informe o primeiro numero\n");
   scanf("%d",&num1);
   printf("Informe o segundo numero\n");
   scanf("%d",&num2);
   printf("Informe o terceiro numero\n");
   scanf("%d",&num3);
   mult= num1*num2*num3;

   printf("A multiplicacao entre os numeros eh %d\n",mult);

return 0;
}

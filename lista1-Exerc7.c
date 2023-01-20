#include <stdio.h>

int main(){


   double peso, pesoGramas;


   printf("Informe o peso em quilos\n");
   scanf("%lf",&peso);
   pesoGramas = peso*1000;
   printf("O peso em gramas eh de  %lfg \n",pesoGramas);


return 0;
}
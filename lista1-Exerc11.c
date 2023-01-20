#include <stdio.h>

int main(){


   int salarioMin, salarioFun;
   double salarioQtd;

   printf("Informe o salario do funcionario\n");
   scanf("%d",&salarioFun);
   printf("Informe o salario minimo\n");
   scanf("%d", &salarioMin);
   salarioQtd = salarioFun/salarioMin;
   printf("O funcionario ganha uma quantidade de %lf salarios minimos", salarioQtd);

return 0;
}

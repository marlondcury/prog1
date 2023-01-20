#include <stdio.h>

int main(){


   double salFixo, comVenda, salFinal, comFinal;


   printf("Informe o salario do funcionario\n");
   scanf("%lf",&salFixo);
   printf("Informe quanto o funcionario vendeu\n");
   scanf("%lf",&comVenda);
   comFinal = comVenda*0.04;
   salFinal = comFinal+salFixo;
    printf("O valor da comissao eh de %lf e o salario final eh de %lf\n",comFinal,salFinal);


return 0;
}

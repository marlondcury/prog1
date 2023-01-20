#include <stdio.h>


int main(){

    float sal, novoSal;

    printf("Digite o salario do funcionario\n");
    scanf("%f",&sal);
    if(sal<500){

        novoSal= (sal + sal*0.3);
    printf("O novo salario eh %f",novoSal);}
    else{
        printf("O funcionario nao tem direito a receber");
    }

   return 0;
}

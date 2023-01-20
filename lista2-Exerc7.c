#include <stdio.h>


int main(){

    float sal, novoSal;

    printf("Digite o salario do funcionario\n");
    scanf("%f",&sal);
    if(sal<300){

        novoSal= (sal + sal*0.15);
    printf("O novo salario eh %f",novoSal);}
    else{
        novoSal = (sal + sal*0.35);
        printf("O novo salario eh %f",novoSal);

    }

   return 0;
}

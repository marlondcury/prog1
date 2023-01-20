#include <stdio.h>


int main(){

    float Sal, novoSal;

    printf("Digite o salario do funcionario\n");
    scanf("%f",&Sal);

    if(Sal<300){
        novoSal= (Sal + Sal*0.15);
        printf("O novo salario eh %f\n",novoSal);
    }
    else if(Sal>=300 && Sal<600){
        novoSal = (Sal + Sal*0.1);
        printf("O novo salario eh %f\n",novoSal);

    }
    else if(Sal>=600 && Sal<900){
        novoSal = (Sal + Sal*0.05);
        printf("O novo salario eh %f\n",novoSal);

    }
    else if(Sal>900){
        novoSal = Sal;
        printf("O novo salario eh %f\n",novoSal);

    }


   return 0;
}

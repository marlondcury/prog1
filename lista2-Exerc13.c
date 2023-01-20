#include <stdio.h>

int main(){

    float Sal, novoSal;

    printf("Digite o salario do funcionario\n");
    scanf("%f",&Sal);

    if(Sal<=300){
        novoSal= (Sal + Sal*0.5);
        printf("O novo salario eh %f\n",novoSal);
    }
    else if(Sal>300 && Sal<=500){
        novoSal = (Sal + Sal*0.4);
        printf("O novo salario eh %f\n",novoSal);

    }
    else if(Sal>500 && Sal<=700){
        novoSal = (Sal + Sal*0.3);
        printf("O novo salario eh %f\n",novoSal);

    }
    else if(Sal>700 && Sal<=800){
        novoSal = (Sal+ Sal*0.2);
        printf("O novo salario eh %f\n",novoSal);

    }
  else if(Sal>800 && Sal<=1000){
        novoSal = (Sal+ Sal*0.1);
        printf("O novo salario eh %f\n",novoSal);

    }
  else if(Sal>1000){
        novoSal = (Sal+ Sal*0.05);
        printf("O novo salario eh %f\n",novoSal);

    }


   return 0;
}
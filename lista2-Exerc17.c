
#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade\n");
    scanf("%d",&idade);


    if(idade>=18){

        printf("Possui a maioridade\n");
    }
    else{

        printf("Nao possui a maioridade\n");
    }
   return 0;
}

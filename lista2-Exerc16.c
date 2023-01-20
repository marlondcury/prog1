#include <stdio.h>

int main(){

    int senha;

    printf("Digite a senha\n");
    scanf("%d",&senha);


    if(senha==4531){

        printf("Senha correta\n");
    }
    else{

        printf("Senha incorreta\n");
    }
   return 0;
}

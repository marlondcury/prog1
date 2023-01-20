#include <stdio.h>

int main(){

    int codigo;
    float preco;

    printf("Digite o preco do produto\n");
    scanf("%f",&preco);
    printf("Digite o codigo do produto\n");
    scanf("%d",&codigo);

    if(codigo==1){

        printf("O preco do produto eh %.2f e sua procedencia eh do Sul\n",preco);
    }
    else if (codigo==2){
        printf("O preco do produto eh %.2f e sua procedencia eh do Norte\n",preco);
    }

     else if (codigo==3){
        printf("O preco do produto eh %.2f e sua procedencia eh do Leste\n",preco);
    }

     else if (codigo==4){
        printf("O preco do produto eh %.2f e sua procedencia eh do Oeste\n",preco);
    }
       else if (codigo==5||codigo==6){
        printf("O preco do produto eh %.2f e sua procedencia eh do Nordeste\n",preco);
    }
       else if (codigo==7||codigo==8 || codigo==9){
        printf("O preco do produto eh %.2f e sua procedencia eh do Sudeste\n",preco);
    }
       else if (codigo>=10||codigo<=20){
        printf("O preco do produto eh %.2f e sua procedencia eh do Centro-Oeste\n",preco);
    }

       else if (codigo>21||codigo<=30){
        printf("O preco do produto eh %.2f e sua procedencia eh do Nordeste\n",preco);
    }
   return 0;
}
#include <stdio.h>
int main(){


   float nota1, nota2, nota3, nota4;
   float media;


   printf("Informe o valor da  primeira nota\n");
   scanf("%f",&nota1);
   printf("Informe o valor da segunda nota\n");
   scanf("%f",&nota2);
   printf("Informe o valor da terceira nota\n");
   scanf("%f",&nota3);
   printf("Informe o valor da quarta nota\n");
   scanf("%f",&nota4);
   media = ((nota1 +nota2+nota3+nota4)/4);
   printf("A sua media escolar foi de %.2f\n", media);
   if(media >=7)
    {
        printf("Voce foi aprovado\n");
   }
   else{
        printf("voce foi reprovado\n");
   }
#include <stdio.h>
int main(){


   float nota1, nota2;
   float media;


   printf("Informe o valor da  primeira nota\n");
   scanf("%f",&nota1);
   printf("Informe o valor da segunda nota\n");
   scanf("%f",&nota2);
   media = ((nota1 +nota2)/2);
   printf("A sua media escolar foi de %.2f\n", media);
   if(media <=4){
        printf("Voce foi reprovado\n");
   }
   if(media <=7){
        printf("voce esta de exame\n");
   }
   if (media>7){
        printf("voce esta aprovado\n");
    }

return 0;
}
#include <stdio.h>
int main(){


   int num1, num2;
   printf("Informe o valor do primeiro numero\n");
   scanf("%d",&num1);
   printf("Informe o valor do segundo numero\n");
   scanf("%d",&num2);

   if(num1<num2){
        printf("%d\n", num1);
   }
   else{
        printf("%d\n",num2);
   }
return 0;
}
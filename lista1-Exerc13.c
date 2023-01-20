#include <stdio.h>

int main(){


   int anoAtual, anoNasc, idadeAnos, idadeMeses, idadeSemanas, idadeDias;


   printf("Informe o ano de nascimento\n");
   scanf("%d",&anoNasc);
   printf("Informe o ano atual\n");
   scanf("%d", &anoAtual);
   idadeAnos = anoAtual - anoNasc;
   idadeMeses = idadeAnos*12;
   idadeSemanas = idadeMeses*4;
   idadeDias = idadeSemanas*7;
   printf("A idade eh de %d anos, sua idade em meses eh de %d meses, suas idade em semanas eh de %d semanas, sua idade em dias eh de %d dias", idadeAnos, idadeMeses, idadeSemanas, idadeDias);

return 0;
}
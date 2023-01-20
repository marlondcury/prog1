#include<stdio.h>

#define max 3

typedef struct informcao{
    char nome[20], sexo, cidade[20], estado[2];
    int idade;
} dados;

void cadastro(dados inf[], int q );
void gravar(dados inf[], int q);

int main(){

    dados info[max];

    cadastro(info, max);


}
void cadastro(dados inf[], int q ){

    int i, resp;

    do{
        for(i = 0; i < q; i++){
            printf("\nInforme o nome [%d]: ", i+1);
            scanf("%s", inf[i].nome);
            printf("\nInforme o sexo: ");
            scanf("%s", inf[i].sexo);
            printf("\nInforme a idade: ");
            scanf("%d", &inf[i].idade);
            printf("\nInforme a cidade: ");
            scanf("%s", inf[i].cidade);
            printf("\nInforme o Estado: ");
            scanf("%s", inf[i].estado);
            printf("\nDigite <0> para continuar o cadastro ou <1> para encerrar.");
            scanf("%d", &resp);
        }
    }while(resp == 0);
}
void gravar(dados inf[], int q){
   FILE *arq;
   int i;

   arq = fopen("dados.txt", "w");

   if (arq == NULL){
      printf("\nERRO ... ERRO .... ERRO...\n");
      exit(1);
   }

   for (i = 0; i < qtd; i++){
      fprintf(arq, "%s\n", inf[i].nome);
      fprintf(arq, "%c\n", inf[i].sexo);
      fprintf(arq, "%d\n", inf[i].idade);
      fprintf(arq, "%s\n", inf[i].cidade);
      fprintf(arq, "%s\n", inf[i].estado);
   }
   fclose(arq);
}

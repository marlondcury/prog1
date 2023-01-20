#include <stdio.h>

typedef struct product{
  char nome[30];
  int cod;
  float precoUn;
  int estAt;
  int estMin;
}Produto;

void preencherP(Produto produtos[], int qtd);
void imprimirP(Produto produtos[], int qtd);
float fat(Produto produtos[], int qtd);

int main(){

  int quant = 3;
  float total=0;
  Produto produtos[quant];

  preencherP(produtos, quant);
  imprimirP(produtos, quant);

  total = fat(produtos, quant);
  printf("Faturamento: %.2f", total);

return 0;
}

void preencherP(Produto produtos[], int quant)
{
  int i;

  for(i=0; i<quant; i++)
  {
    printf("Nome  %d: ", i);
    scanf("%s", produtos[i].nome);
    printf("Codigo  %d: ", i);
    scanf("%d", &produtos[i].cod);
    printf("Preco unitario %d: ", i);
    scanf("%f", &produtos[i].precoUn);
    printf("Estoque atual  %d: ", i);
    scanf("%d", &produtos[i].estAt);
    printf("Estoque minimo  %d: ", i);
    scanf("%d", &produtos[i].estMin);
  }
}

void imprimirP(Produto produtos[], int qtd)
{
  int i;

  for(i=0; i<qtd; i++)
  {
    if((produtos[i].estAt)<(produtos[i].estMin))
    {
      printf("Nome  %d: %s\n", i, produtos[i].nome);
      printf("Codigo  %d: %d\n", i, produtos[i].cod);
    }
  }
}

float fat(Produto produtos[], int qtd)
{
  int i, total;

  for(i=0; i<qtd; i++)
  {
     total += produtos[i].estAt*produtos[i].precoUn;
  }
return total;
}

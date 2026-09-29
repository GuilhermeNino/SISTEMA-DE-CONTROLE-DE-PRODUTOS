#include <stdio.h>

int main() {

  int codigo1 = 101;

  int codigo2 = 102;

  int codigo3 = 103;

  int codigo4 = 104;

  int codigo5 = 105;

  int quantidade1, quantidade2, quantidade3, quantidade4, quantidade5;

  char nome1[50], nome2[50], nome3[50], nome4[50], nome5[50];

  float preco1, preco2, preco3, preco4, preco5;

  float valorEstoque1, valorEstoque2, valorEstoque3;

  float valorEstoque4, valorEstoque5;

  float valorTotal;

  printf("========================================\n");

  printf("   SISTEMA DE CONTROLE DE PRODUTOS\n");

  printf("========================================\n\n");

  // PRODUTO 1

  printf("Produto 1 - Codigo: %d\n", codigo1);

  printf("Nome: ");

  scanf(" %[^\n]", nome1);

  printf("Preco: R$ ");

  scanf("%f", &preco1);

  printf("Quantidade: ");

  scanf("%d", &quantidade1);

  printf("\n");

  // PRODUTO 2

  printf("Produto 2 - Codigo: %d\n", codigo2);

  printf("Nome: ");

  scanf(" %[^\n]", nome2);

  printf("Preco: R$ ");

  scanf("%f", &preco2);

  printf("Quantidade: ");

  scanf("%d", &quantidade2);

  printf("\n");

  // PRODUTO 3

  printf("Produto 3 - Codigo: %d\n", codigo3);

  printf("Nome: ");

  scanf(" %[^\n]", nome3);

  printf("Preco: R$ ");

  scanf("%f", &preco3);

  printf("Quantidade: ");

  scanf("%d", &quantidade3);

  printf("\n");

  // PRODUTO 4

  printf("Produto 4 - Codigo: %d\n", codigo4);

  printf("Nome: ");

  scanf(" %[^\n]", nome4);

  printf("Preco: R$ ");

  scanf("%f", &preco4);

  printf("Quantidade: ");

  scanf("%d", &quantidade4);

  printf("\n");

  // PRODUTO 5

  printf("Produto 5 - Codigo: %d\n", codigo5);

  printf("Nome: ");

  scanf(" %[^\n]", nome5);

  printf("Preco: R$ ");

  scanf("%f", &preco5);

  printf("Quantidade: ");

  scanf("%d", &quantidade5);

  printf("\n");

  // CALCULO DO ESTOQUE

  valorEstoque1 = preco1 * quantidade1;

  valorEstoque2 = preco2 * quantidade2;

  valorEstoque3 = preco3 * quantidade3;

  valorEstoque4 = preco4 * quantidade4;

  valorEstoque5 = preco5 * quantidade5;

  valorTotal = valorEstoque1 + valorEstoque2 + valorEstoque3

        + valorEstoque4 + valorEstoque5;

  // RESULTADO

  printf("========================================\n");

  printf("     PRODUTOS REGISTRADOS\n");

  printf("========================================\n\n");

  printf("Produto 1\n");

  printf("Codigo: %d\n", codigo1);

  printf("Nome: %s\n", nome1);

  printf("Preco: R$ %.2f\n", preco1);

  printf("Quantidade: %d\n", quantidade1);

  printf("Valor em estoque: R$ %.2f\n\n", valorEstoque1);

  printf("Produto 2\n");

  printf("Codigo: %d\n", codigo2);

  printf("Nome: %s\n", nome2);

  printf("Preco: R$ %.2f\n", preco2);

  printf("Quantidade: %d\n", quantidade2);

  printf("Valor em estoque: R$ %.2f\n\n", valorEstoque2);

  printf("Produto 3\n");

  printf("Codigo: %d\n", codigo3);

  printf("Nome: %s\n", nome3);

  printf("Preco: R$ %.2f\n", preco3);

  printf("Quantidade: %d\n", quantidade3);

  printf("Valor em estoque: R$ %.2f\n\n", valorEstoque3);

  printf("Produto 4\n");

  printf("Codigo: %d\n", codigo4);

  printf("Nome: %s\n", nome4);

  printf("Preco: R$ %.2f\n", preco4);

  printf("Quantidade: %d\n", quantidade4);

  printf("Valor em estoque: R$ %.2f\n\n", valorEstoque4);

  printf("Produto 5\n");

  printf("Codigo: %d\n", codigo5);

  printf("Nome: %s\n", nome5);

  printf("Preco: R$ %.2f\n", preco5);

  printf("Quantidade: %d\n", quantidade5);

  printf("Valor em estoque: R$ %.2f\n\n", valorEstoque5);

  printf("========================================\n");

  printf("Valor total do estoque: R$ %.2f\n", valorTotal);

  printf("========================================\n");

  return 0;

}

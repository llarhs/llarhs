#include <stdio.h>
#include <stdlib.h>
int main()
 {
 	int opcao;
 	int codigo;
 	float valor;
 	while (opcao != 4)
 	{
	 system("cls");
	 system("color 0D");
	 printf("\t\t\t\t\t\t SUSHIZ S.A");
 	printf("\n\n\n\n");
 	printf("\t\t\t 1-Cadastro Pedidos");
 	printf("\n\n");
 	printf("\t\t\t 2-Relatorio Pedidos");
 	printf("\n\n");
 	printf("\t\t\t 3-Sobre");
 	printf("\n\n");
 	printf("\t\t\t Sair do sistema");
 	scanf("%i", &opcao);
 	printf("\n\n");
	 
	 switch (opcao)
 	{
 		case 1:
 			system("cls");
			 printf("\t\t\t\t\t\t SUSHIZ S.A");
 			printf("\n\n\n\n");
 			printf("\t\t\t 1-Cadastro Pedidos");
 			printf("\n\n");
 			printf("Codigo do pedido");
 			scanf("%i",&codigo);
 			printf("\t\t\t Valor do pedido");
 			scanf("%f", &valor);
 			break;
 		case 2:
 				system("cls");
			 printf("\t\t\t\t\t\t SUSHIZ S.A");
 			printf("\n\n\n\n");
 			printf("\t\t\t Relatorio de pedidos");
 			printf("\t\t\t Codigo do pedido %i ",codigo);
 			printf("\t\t\t Codigo do pedido %.2f ",valor);
 			printf("\n\n\n\n\n\n\n\n");
			 system("pause");
		case 3:
			system("cls");		
			 printf("\t\t\t\t\t\t SUSHIZ S.A");
 			printf("\n\n\n\n");
 			printf("\t\t\t Sobre");
 			printf("\n\n");
 			printf("\t\t\t Nome do programadora %s ", "lara");
 			printf("\n\n");
			printf("\t\t\t Celular de contato %s", "378583897");
			printf("\n\n\n\n\n\n\n\n\n");
			system("pause");	
 			
	 }
}
 }

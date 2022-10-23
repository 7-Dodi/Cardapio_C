#include <stdio.h>
#include <stdlib.h>
float valor(int num){ //Função contento as variaveis e seus valores
	switch(num){
		case 100: return 1.20;break;
		case 101: return 1.30;break;
		case 102: return 1.50;break;
		case 103: return 1.20;break;
		case 104: return 1.50;break;
		case 105: return 1.00;break;
		case 106: return 1.20;break;
		default: return 0;break;
	}
}
void main(){
	printf("\n############# CARDAPIO ##############\n"); // Cardapio informando o nome do alimento e sues respectivos valores e codigos
	printf("Nome do prato\tCodigo\tValor\n");
	printf("\nCachorro quente\t 100\tR$ 1,20");
	printf("\nBauru Simples\t 101\tR$ 1,30");
	printf("\nBauru com ovo\t 102\tR$ 1,50");
	printf("\nHamburguer\t 103\tR$ 1,20");
	printf("\nCheeseburguer\t 104\tR$ 1,50");
	printf("\nRefrigerente\t 105\tR$ 1,00");
	printf("\nSuco de frutas\t 106\tR$ 1,20");
	printf("\n########################################");
	printf("\nTudo pronto?? Clique me qualquer tecla para iniciar o pedido....");
	getch();// Pausa no programa
	printf("\n\n############### ESPECIFICACOES ###################\n");
	printf("\nInforme os codigos dos proodutos desejados;\nQuando concluir o pedido digite o numero 0 (Zero).\n"); //Explicando as regras do programa
	printf("\n#####################################################\n");
	int codigo;
	float soma=0;
	do{
		printf("\nDigite o codigo do produto que deseja:"); //Digitando o codigo
		scanf("%d", & codigo);
		int conta= valor(codigo);
		if(conta==0 && codigo!=0){ //Caso o cliente digite um codigo invalido
			printf("\nCODIGO INCORRETO!!!... Clique em qualquer tecla e tente novamente");
			getch();
		}
		else{ //Soma total do pedido
			soma= soma+conta;	
		}
	}while(codigo!=0);
	printf("\nObrigado pela preferencia!! Calculando o valor da sua conta... Clique em qualquer tecla para continuar....");
	getch();
	printf("\n################# RESULTADO ##################\n");// Apresentando o resultado da compra
	printf("\n O valor da sua conta foi: R$ %.2f", soma);
}

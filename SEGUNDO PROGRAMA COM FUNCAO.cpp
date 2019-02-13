// escrever um programa que receba um numero inteiro e aprsente um menu
// 1 - tabuada
// 2 - fatorial
// .
// .
// 5 fim
// CADA OPCAO DEVE RECEBER UM PROCEDIMENTO QUE RECEBA NUMERO LIDO E INFORME A RESPOSTA
// VOID TABUADA
// VOID FATORIAL
// VOID MENU

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void menu()
{
		printf("\n");
		printf("DIGITE 1 PARA TABUADA\n");
		printf("DIGITE 2 PARA FATORIAL\n");
		printf("DIGITE 5 PARA SAIR\n");
		printf("\n");
	
	
}
//----------------------------------------------------------
void tabuada(int nu)
{
	int i;
	printf("\n");
	
	for (i=0;i<=10;i++)
	{
		printf("%d x %d = %d\n", nu, i, (i*nu));
	}
	
//---------------------------------------------------------	
}

void fatorial (int nuft)
{
	int i=nuft, fato=nuft;
	
	do
	{
		fato = fato * (i-1);
		i--;
	
	}while (i>1);
	printf("\n");
	printf("FATORIAL DE %d = %d\n", nuft, fato);
}

//--------------------------------------------
int main()
{
	
	int numero, o, p, n ;
	
	printf("Digite um numero\n");
	scanf("%d", &numero);
	printf("\n");
	
	do
	{
		menu();
		scanf("%d",&p);
	
		switch (p)
		{
			case 1:
			tabuada(numero);
			break;
			
			case 2:
			fatorial(numero);
			break;		
		}
		
			
	}while (p!=5);
}

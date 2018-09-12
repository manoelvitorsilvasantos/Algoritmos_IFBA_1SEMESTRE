//HELEN - 

//BIBLIOTECAS --------------------- //

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#define um 1
#define zero 0

//------------------------ PROCEDIMENTOS da PORTAS LOGICAS -------------------------------//

void PAUSA(void);
void LIMPAR(void);
void PORTA_AND(void);
void PORTA_OR(void);
void PORTA_XOR(void);

//------------------------- FUNCOES DA PORTA LOGICAS --------------------//

int FUNCAO_AND(int valorX, int valorY);
int FUNCAO_OR(int valorX, int valorY);
int FUNCAO_XOR(int valorX, int valorY);
int ESTADO(int NIVEL);


//----------------------- FUNCAO PRINCIPAL DO PROGRAMA ----------------//

int main(){
	
	
	//variaveis locais
	int opcoes;
	
	//estrutura de repeticao
	
	do {
		
		LIMPAR();
		//funcao da biblioteca stdio, que fica responsavel por mostrar o texto na tela
		printf("\nPORTAS LOGICAS\n"); 	
		printf("\n 1 - AND\n");
		printf("\n 2 - OR \n");
		printf("\n 3 - XOR\n");
		printf("\n 0 - SAIR\n");
		printf("\n\n");
		scanf("%d", &opcoes); // funcao da biblioteca
		printf("\n\n");
		
		//estrutura de multiselecao.
		
		switch(opcoes){

			case 1: PORTA_AND();
			break;
	
			case 2: PORTA_OR();
			break;
	
			case 3: PORTA_XOR();
			break;
		}
		
	} while(opcoes > 0);
	
	printf("\n\tAPERTE QUALQUER BOTAO PARA SAIR.\n");
	PAUSA();
	return 0;
	
}

void PAUSA(void){
	
	getch();
}

void LIMPAR(void){
	
	system("cls");
}

void PORTA_AND(void){
	
	int x, y;
	
	printf("\nPORTA AND\n");
	printf("\nDigite um valor para [x] e [y]\n");
	scanf("%i %i", &x,  &y);
	FUNCAO_AND(x, y);
	PAUSA();
	
}

void PORTA_OR(void){
	
	int x, y;
	
	printf("\nPORTA OR\n");
	printf("\nDigite um valor para [x] e [y]\n");
	scanf("%i %i", &x ,&y);
	FUNCAO_OR(x, y);
	PAUSA();
}

void PORTA_XOR(void){
	
	int x, y;
	
	printf("\nPORTA XOR\n");
	printf("\nDigite um valor para [x] e [y]\n");
	scanf("%i %i", &x,  &y);
	FUNCAO_XOR(x, y);
	PAUSA();
	
}

int FUNCAO_AND(int valorX, int valorY){
	
	//estrutura de selecao simples e dupla
	
	if(valorX == 1 && valorY == 1) return ESTADO(1);
	else if(valorX == 1 && valorY == 0) return ESTADO(0);
	else if(valorX == 0 && valorY == 1) return ESTADO(0);
	else if(valorX == 0 && valorY == 0) return ESTADO(0);
}

int FUNCAO_OR(int valorX, int valorY){
	
	if(valorX == 1 && valorY == 1) return ESTADO(1);
	else if(valorX == 1 && valorY == 0) return ESTADO(1);
	else if(valorX == 0 && valorY == 1) return ESTADO(1);
	else if(valorX == 0 && valorY == 0) return ESTADO(0);
}

int FUNCAO_XOR(int valorX, int valorY){
	
	if(valorX == 1 && valorY == 1) return ESTADO(0);
	else if(valorX == 1 && valorY == 0) return ESTADO(1);
	else if(valorX == 0 && valorY == 1) return ESTADO(1);
	else if(valorX == 0 && valorY == 0) return ESTADO(0);
}

int ESTADO(int NIVEL){
	
	if(NIVEL == 1) return printf("\nATIVADO.\n");
	else if(NIVEL == 0) return printf("\nDESATIVADO\n");
	PAUSA();
	
}

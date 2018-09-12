

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void PAUSA(void);

int main(){
	
	int valor_em_binario, valor_em_decimal, i;
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite um valor para nossa variavel: \n");
	printf("\n\n");
	scanf("%i", &valor_em_decimal);
	printf("\n\n");
	
	// para numeros de 8 bits
	
	printf("\t");
	for(i = 7; i >= 0; i--){
		
		valor_em_binario = valor_em_decimal >> i;
		
		//organizar o numeros
		
		printf("\t");
		
		if(valor_em_binario & 1){
			printf("1");
		}
		else{
			printf("0");
		}
			
	}
	printf("\n\n");
	//em hexadecimal
	printf("\n\tO valor de [%d] em Hexadecimal e [%X]\n", valor_em_decimal, valor_em_decimal);
}

void PAUSA(void){
	getch();
}


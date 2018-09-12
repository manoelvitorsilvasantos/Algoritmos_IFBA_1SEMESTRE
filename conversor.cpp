/

// 1 - RELATÓRIO TÉCNICO
// FABIOLA ALVES DE OLIVEIRA. 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

	int binario, i, decimal;
	
	
	printf("\n\tDigite um valor inteiro: \n");
	printf("\n\t");
	scanf("%i", &decimal);
	printf("\n");
	
	
	for( i = 7; i >= 0; i--){
		printf("\t");
		binario = decimal >> i;
		if(binario & 1){
			printf("[1]");
		}
		else{
			printf("[0]");
		}
		
	}
	
	printf("\n\t Em hexadecimal equivale a [%X]\n", decimal);	
	getch();
	return 0;

}


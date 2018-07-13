#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

    ALGORITMO - BY MANOEL VITOR PAU FERRO SILVA SANTOS

*/


int main(){



	float peso[3], altura[3], imcMax, imcMin, imc[3]; // variaveis
	int idade[3], maior, menor,i; //variaveis

	for(i = 0; i < 3; i++){ // estrutura de controle conta ate 3

		printf("\nDigite seu Peso:\n");
		scanf("%f", &peso[i]);

		printf("\nDigite seu Altura:\n");
		scanf("%f", &altura[i]);

		printf("\nDigite seu Idade:\n");
		scanf("%d", &idade[i]);

		imc[i] = peso[i]/ pow(altura[i], 2); //imc

		if(idade[i] < menor){ // se for menor

			menor =  idade[i];
            imcMin = imc[i]; // imc da pessoa mais nova

		}
		else{ //senao se for maior

			maior =  idade[i];
            imcMax = imc[i]; // imc da pessoa mais velha

		}


	}


	printf("\n A pessoa mais Velha tem [%d], seu IMC foi [%2.1f]\n", maior, imcMax); // imprime a idade da pessoa mais velha e seu imc
	printf("\n A pessoa mais Nova tem [%d], seu IMC foi [%2.1f]\n\n",  menor, imcMin); // imprime  a idade da pessoa mais nova e seu imc


	system("pause");
	return 0;

}


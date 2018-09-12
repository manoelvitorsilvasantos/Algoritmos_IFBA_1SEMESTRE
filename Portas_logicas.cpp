
// FABIOLA ALVES DE OLIVEIRA

//BIBLIOTECAS DA LINGUAGEM C.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//FUNCOES QUE RETORNAM UM RESPOSTA.

int AND(int x, int y);
int OR(int x, int y);
int XOR(int x, int y);
int ativado(int ligado); //ATIVA UMA DETERMINA RESPOSTA DE ACORDO COM AS CONDICOES

//PROCEDIMENTOS

void FUNC_AND(int x, int y);
void FUNC_OR(int x, int y);
void FUNC_XOR(int x, int y);
void LIMPAR_TELA(void);
void PAUSA(void);

//FUNCAO MAIN - FUNCAO PRINCIPAL DO PROGRAMA C
int main(){

	//VARIAVEIS LOCAIS
	int menu, entrada1, entrada2;


	//ESTRUTURA DE REPETIÇÃO DO...WHILE, ENQUANTO A CONDICAO NAO FOR ATENDIDAD ELE REPETE O CICLO DO PROGRAMA
	do{

        LIMPAR_TELA();
		printf("\n\t================================================\n");
		printf("\n\t  [1] - AND                                     \n");
		printf("\n\t  [2] - OR                                      \n");
		printf("\n\t  [3] - XOR                                     \n");
        printf("\n\t  [0] - SAIR                                    \n");
		printf("\n\t================================================\n");
		printf("\n\t");
		scanf("%i", &menu); //FUNCAO RESPONSAVEL POR PEGAR OS VALORES DIGITADOS PELO USUARIO
		printf("\n");// FUNCAO RESPONSAVEL POR EXIBIR UM TEXTO NA TELA DO PROGRAMA.

		//ESTRUTURA DE MULTISELECA OU CONDICIONAL.
		//O USUARIO ESCOLHA UM DOS CASO, E O PROGRAMA EXECUTA UM BLOCO DE COMANDO DENTRO DOS CASOS.
		switch(menu){

			case 1:

				FUNC_AND(entrada1, entrada2);

			break;

			case 2:

				FUNC_OR(entrada1, entrada2);

			break;

			case 3:

				FUNC_XOR(entrada1, entrada2);

			break;

		}

	} while(menu > 0);

	getch(); // FUNCAO QUE DA UMA PAUSA "NAO FECHA O PROGRAMA DE UMA VEZ."
	return 0; //FINALIZA O PROGRAMA.

}

//ESSA FUNCAO DE RETORNO, O USUARIO COLOCA UM VALOR  LOGICO QUE FOI DEFINIDO COMO SENDO 1 E 0, 1 PARA LIGADO E ZERO PARA DESLIGADO.
//SE ESTIVER LIGADO ELE MOSTRA A MENSAGEM DE LIGADO, SENAO MOSTRA A MENSAGEM DE DESLIGADO.

int ativado(int ligado){

	if( ligado == 1) return printf("\n\tLIGADO.\n");
	else if(ligado == 0) return printf("\n\tDESLIGADO.\n");

}

// PROCEDIMENTO QUE PEGA O VALOR DE X E Y , DIGITADO PELO O USUARIO.

void FUNC_AND(int x, int y){

	printf("\n\tDigite um valor para [X]: \n");
	printf("\n\t");
	scanf("%i", &x);
	printf("\n");

    printf("\n\tDigite um valor para [Y]: \n");
    printf("\n\t");
	scanf("%i", &y);
	printf("\n");

	AND(x, y);
}

void FUNC_OR(int x, int y){

    printf("\n\tDigite um valor para [X]: \n");
	printf("\n\t");
	scanf("%i", &x);
	printf("\n");

    printf("\n\tDigite um valor para [Y]: \n");
    printf("\n\t");
	scanf("%i", &y);
	printf("\n");

	OR(x, y);

}

void FUNC_XOR(int x, int y){

    printf("\n\tDigite um valor para [X]: \n");
	printf("\n\t");
	scanf("%i", &x);
	printf("\n");

    printf("\n\tDigite um valor para [Y]: \n");
    printf("\n\t");
	scanf("%i", &y);
	printf("\n");

	XOR(x, y);

}

//RETORNA UMA RESPOSTA DE ACORDO COM OS VALORES LOGICOS NO PROCEDIMENTO DE CADA PORTA LOGICA

int AND(int x, int y){

	if(x == 1 && y == 1){
		ativado(1);
		PAUSA();
	}
	else if(x == 1 && y == 0){
		ativado(0);
		PAUSA();
	}
	else if(x == 0 && y == 1){
		ativado(0);
		PAUSA();
	}
	else if(x == 0 && y == 0){
		ativado(0);
		PAUSA();
	}

}

int OR(int x, int y){

	if(x == 1 && y == 1){
		ativado(1);
		PAUSA();
	}
	else if(x == 1 && y == 0){
		ativado(1);
		PAUSA();
	}
	else if(x == 0 && y == 1){
		ativado(1);
		PAUSA();
	}
	else if(x == 0 && y == 0){
		ativado(0);
		PAUSA();
	}

}

int XOR(int x, int y){

	if(x == 1 && y == 1){
		ativado(0);
		PAUSA();
	}
	else if(x == 1 && y == 0){
		ativado(1);
		PAUSA();
	}
	else if(x == 0 && y == 1){
		ativado(1);
		PAUSA();
	}
	else if(x == 0 && y == 0){
		ativado(0);
		PAUSA();
	}
}

void PAUSA(void){
    getch();
}

void LIMPAR_TELA(void){
    system("cls");
}

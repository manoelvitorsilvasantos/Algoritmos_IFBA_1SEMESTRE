#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#define dim 3 // define o tamanho da matriz

//VARIAVEIS GLOBAIS.
char X= 'X', O = 'O';
int vO, vX;
//minhas funcoes

int acertos(int vX, int vO);

//meus procedimentos
void pause(void);
void insere(int linhas, int colunas, int id, char matriz[dim][dim]);
void limpar(void);
void jogar(void);
void creditos(void);
void EXIBIR(char matriz[dim][dim]);
void vencedor(int vezes, char *ponteiro, char m[dim][dim], char nome1[], char nome2[]);

//funcao principal de um programa em C.
int main(){

	//variaveis locais.
	int opcao;

	do{
		setlocale(LC_ALL, "Portuguese");
		limpar();
		printf("\n\t >> Digite um n�mero correspondente a op��o << \n");
		printf("\n\t===================================\n");
		printf("\n\t [1] - JOGAR					   \n");
		printf("\n\t [2] - CREDITOS					   \n");
		printf("\n\t [0] - SAIR						   \n");
		printf("\n\t===================================\n");
		printf("\n\t");
		scanf("%i", &opcao);
		printf("\n");
		
		switch(opcao){

				case 0: exit(0);
				break;
				case 1:
				printf("\n\t >> [ATE��O] << \n"); 
				printf("\n\tPORFAVOR, DEIXE A TELA MAXIMAZADA DO PROMPT,\n");
				printf("\n\tPARA QUE TODOS TEXTO SEJA VISUALIZADO.\n");
				printf("\n\t\n");
				printf("\n\t >> Aperte qualquer [BOT�O] para continuar! << \n");
				pause();
				jogar();
				break;
				case 2: creditos();
				break;
			}
			
		
	}while(opcao > 0);

    setlocale(LC_ALL, "Portuguese");
    printf("\n\t >> Aperte qualquer bot�o para encerrar. << \n");
	pause();
	return 0;

}

//procedimento - Executa comandos referentes ao jogo.
void jogar(void){
	
	//variaveis locais.
	char *p;
	int cont = 0;
	int vezes;
	int linhas, colunas;
	char name1[30], name2[30];

	char m[dim][dim];

	vX = 0, vO = 0;


	setlocale(LC_ALL, "Portuguese");
    limpar();

	printf("\n\tJogador 1 - >> Digite seu nome:\n");
	printf("\n\t");
    fflush(stdin);
    gets(name1);
    printf("\n");

	printf("\n\tJogador 2 - >> Digite seu nome:\n");
	printf("\n\t");
	fflush(stdin);
    gets(name2);
	printf("\n");

	for(int i = 0; i < dim; ++i)
	for(int j = 0; j < dim; ++j)
	m[i][j] = ' ';


	vezes = 9;



	do{



		limpar(); // limpa tela.



		if( vezes%2!=0 ){ // se a vez for um numero par


            vencedor(vezes, p, m, name1, name2); // verifica o vencedor do jogo.
			//limpar o valor, da variavel de controle que mostra uma mensagem toda vez que o for, for rodado.
			
			
			for(int i = 0; i < 1; i++){
        		cont = 0;
        	}

			//essa condicao verifica se o numero de vez e a penultimo valo.

			if(vezes == 1) printf("\n\t�ltima jogada.\n");



			//repete enquanto as posicoes na matriz estiver preenchido c/ X e O.

            do{

				//SE O JOGADOR DIGITOU AS COORDENAS, QUE JA ESTAO PREECHIDA, VERIFICA SE O CONTADOR , E SER ELE
				//ESTIVER C/ UM VALOR DIFERENTE DO INICIO, ISSO SIGNIFICA QUE ELE RODOU MAIS DE UMA VEZ
				// E QUE PORTANTO O JOGADOR COLOCOU UM POSICAO INVALIDA, ENTAO VAI MOSTRAR ESSA MENSAGEM.

                if(cont >= 1){
                	limpar();
                    printf("\n\tPosi��o Inv�lida, Tente Novamente!\n");
                }

               	// MOSTRA O NUMEROS DE VEZES, E AINDA QUANTOS ACERTOS COM X OU O FORAM FEITOS.
                printf("\n\t========================================\n");
				printf("\n\tN�mero de vezes [%i]\n", vezes);
				acertos(vX, vO);
				printf("\n\t========================================\n");

                //----------------------------------------------------------------//

				EXIBIR(m); // mostra a matriz.
				printf("\n\tJogador 1 - %s, >> Digite as coordenadas:\n", name1);
		        printf("\n\t >> Digite um valor entre 0 e 2, para linha da matriz: \n");
                printf("\n\t");
                scanf("%i", &linhas);
                printf("\n\t >> Digite um valor entre 0 e 2, para coluna da matriz: \n");
                printf("\n\t");
                scanf("%i", &colunas);
                printf("\n");
                limpar();
				
				//pegar o endereco de ponteiro, do primeiro valor digitado na matriz.
				if(vezes == 9){
					p = &m[linhas][colunas];						
				}
				
                 cont += 1; // contador.

			} while(m[linhas][colunas] == X || m[linhas][colunas] == O);

			insere(linhas, colunas, 1, m); // insere os chars na matriz.
		}
		else if(vezes%2==0){ // se a vez for um numero impar


			vencedor(vezes, p, m, name1, name2); // verifica o vencedor do jogo.

			//limpar o valor, da variavel de controle que mostra uma mensagem toda vez que o for, for rodado.
			for(int i = 0; i < 1; i++){
        		cont = 0;
        	}

			//essa condicao verifica se o numero de vez e a penultimo valo.
			if(vezes == 2) printf("\n\t�ltima jogada.\n");

			//repete enquanto as posicoes na matriz estiver preenchido c/ X e O.

			do{

                if(cont >= 1){
            		limpar();
                    printf("\n\tPosi��o Inv�lida, Tente Novamente!\n");
                }


                printf("\n\t========================================\n");
				printf("\n\tN�mero de vezes [%i]\n", vezes);
				acertos(vX, vO);
				printf("\n\t========================================\n");

                //----------------------------------------------------------------//

                EXIBIR(m); //mostra a matriz.
                printf("\n\tJogador 2 - %s, >> Digite as coordenadas:\n", name2);
                printf("\n\t >> Digite um valor entre 0 e 2, para linha da matriz: \n");
                printf("\n\t");
                scanf("%i", &linhas);
                printf("\n\t >> Digite um valor entre 0 e 2, para coluna da matriz: \n");
                printf("\n\t");
                scanf("%i", &colunas);
                printf("\n");
                limpar();

                cont += 1;

			} while(m[linhas][colunas] == X || m[linhas][colunas] == O);

			insere(linhas, colunas, 0, m); // insere os chars na matriz.
		}

        vezes = vezes;
		--vezes;

	} while(vezes > 0);
    //no caso de empate
    if(vezes == 0){

        printf("\n\t DEU EMPATE!!! \n");
        printf("\n\tEndere�o do ponteiro = %p\n", p);
        printf("\n\t\n");
    }
	pause();
}
/*

	Verifica sem algum completou alguma linha, coluna ou diagonais, caso o usu�rio complete ele mostra,
	que foi o vencedor,e o endere�o do ponteiro, da coordenadas da matriz[0][0].

*/

void vencedor(int vezes, char*ponteiro, char m[dim][dim], char nome1[], char nome2[]){

	setlocale(LC_ALL, "Portuguese");
	//linhas
    for(int i = 0; i < dim; i++){
        if(m[i][0] == X && m[i][1] == X  && m[i][2] == X){
            vezes = 0;

           	printf("\n\t %s, Voc� Venceu o Jogo\n", nome1);
            printf("\n\tENDERECO do ponteiro = %p\n", ponteiro );
            printf("\n\tParab�ns...\n");
        }
    }
    //colunas
    for(int i = 0; i < dim; i++){
        if(m[0][i] == X && m[1][i] == X  && m[2][i] == X){
            vezes = 0;
            printf("\n\t %s, Voc� Venceu o Jogo\n", nome1);
            printf("\n\tENDERECO do ponteiro = %p\n", ponteiro );
            printf("\n\tParab�ns...\n");
        }
    }

    //linhas
    for(int i = 0; i < dim; i++){
        if(m[i][0] == O && m[i][1] == O && m[i][2] == O){
            vezes = 0;
            printf("\n\t %s, Voc� Venceu o Jogo\n", nome2);
            printf("\n\tENDERECO do ponteiro = %p\n", ponteiro );
            printf("\n\tParab�ns...\n");
        }
    }
    //colunas
    for(int i = 0; i < dim; i++){
        if(m[0][i] == O && m[1][i] == O  && m[2][i] == O){
            vezes = 0;
            printf("\n\t %s, Voc� Venceu o Jogo\n", nome2);
            printf("\n\tENDERECO do ponteiro = %p\n", ponteiro );
            printf("\n\tParab�ns...\n");
        }
    }

    //diagonais X
    if(m[0][0] == X && m[1][1] == X && m[2][2] == X){
        vezes= 0;
       	printf("\n\t %s, Voc� Venceu o Jogo\n", nome1);
        printf("\n\tENDERECO do ponteiro = %p\n", ponteiro );
        printf("\n\tParab�ns...\n");
    }
    else if(m[0][2] == X && m[1][1] == X && m[2][0] == X){
        vezes= 0;
        printf("\n\t %s, Voc� Venceu o Jogo\n", nome1);
        printf("\n\tENDERECO do ponteiro = %p\n", ponteiro );
        printf("\n\tParab�ns...\n");
    }

    //diagonais O
    else if(m[0][0] == O && m[1][1] == O && m[2][2] == O){
        vezes= 0;
        printf("\n\t %s, Voc� Venceu o Jogo\n", nome2);
        printf("\n\tENDERECO do ponteiro = %p\n", ponteiro );
        printf("\n\tParab�ns...\n");
    }
    else if(m[0][2] == O && m[1][1] == O && m[2][0] == O){
        vezes= 0;
        printf("\n\t %s, Voc� Venceu o Jogo\n", nome2);
        printf("\n\tENDERECO do ponteiro = %p\n", ponteiro );
        printf("\n\tParab�ns...\n");
    }



	if(vezes == 0){
		getch();
		limpar();
		main();
	}
}
/*
	Pega os n�meros de acertos com a Letra X e O, e mostra quantas letras j� foi inserida.
*/
int acertos(int vx, int vo ){

	return printf("\n\tN�meros de acertos para X, foi %d\n\n\tN�meros de acertos para O, foi %d \n", vx, vo);

}
/*
	Insere ou um LETRA X ou LETRA O, dentro da matriz, de acordo com o valor id do jogador,
	dentro da linha e coluna fornecido a fun��o.
*/
void insere(int linhas, int colunas, int id, char matriz[dim][dim]){

	if(id == 1){ // jogador 1

		if(matriz[linhas][colunas] == ' '){
			vX += 1;
			matriz[linhas][colunas] = X;
		}

	}
	else{ // jogador 2

		if(matriz[linhas][colunas] == ' '){
			vO += 1;
			matriz[linhas][colunas] = O;
		}

	}


}
/* Mostra para o us�ario, a matriz do jogo da velha. */
void EXIBIR(char matriz[dim][dim]){
	printf("\n\t	Coordenadas.\n");
	printf("\n\t\n");
	printf("\n\t  	[0][1][2]\n");
	printf("\n\t\n");
	printf("\n\t[0] 	%c | %c | %c", matriz[0][0], matriz[0][1], matriz[0][2]);
	printf("\n\t	--+---+--\n");
	printf("\n\t[1] 	%c | %c | %c", matriz[1][0], matriz[1][1], matriz[1][2]);
	printf("\n\t	--+---+--\n");
	printf("\n\t[2] 	%c | %c | %c", matriz[2][0], matriz[2][1], matriz[2][2]);
	printf("\n\t\n");
}

/* D� uma pausa na execu��o dos comandos ou fun��es, antes dessa fun��o. */
void pause(void){
	getch();
}


/* Respons�vel por limpar o screen da tela.*/
void limpar(void){
	system("cls");
}

/*
	Nesse procedimento, e mostrado para o usu�rio,
	algumas informa��es a respeito de quem desenvolveu esse projeto.

*/
void creditos(void){

    limpar();
    setlocale(LC_ALL, "Portuguese");
	printf("\n\t=============================================\n");
	printf("\n\t|                                           |\n");
    printf("\n\t|    PROJETO JOGO DA VELHA                  |\n");
    printf("\n\t|                                           |\n");
    printf("\n\t|    AULA DE ALGORITMOS E PROGRAMA��O       |\n");
    printf("\n\t|    ORIENTADORA LAIS FARIAS ALVES          |\n");
    printf("\n\t|    EQUIPE DE DESENVOLVIMENTO              |\n");
    printf("\n\t|    EDENILTON SILVA PEREIRA FILHO          |\n");
    printf("\n\t|    HIANE FERNANDES                        |\n");
    printf("\n\t|    MATEUS DE SOUZA NOVAES                 |\n");
    printf("\n\t|    MANOEL VITOR PAU FERRO                 |\n");
    printf("\n\t|                                           |\n");
    printf("\n\t|    TODOS DIREITOS RESERVADOS AO IFBA      |\n");
    printf("\n\t|                                           |\n");
    printf("\n\t|                                           |\n");
	printf("\n\t=============================================\n");
	printf("\n\t\n");

	printf("\n\t >> Aperte qualquer bot�o para voltar ao MENU. << \n");
	pause();
}



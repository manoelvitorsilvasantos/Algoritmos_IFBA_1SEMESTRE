/*

	ATIVIDADE DE ESTRUTURA DE DADOS -> LISTA SIMPLISMENTE ENCADEADA.
	
	CODIGO DESENVOLVIDO POR ->
	
	1 - GUSTAVO
	2 - LUCAS 
	3 - MANOEL VITOR
	
	SOBRE A SUPERVISAO DE 
	
	PROFESSORA LAIS FARIAS ALVES
	
	DATA -> 22/07/2019
	
	TURMA DE ADS 2 SEMESTRE
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//estrutura de dado do tipo lista
struct Node{
	int info;
	struct Node *proximo;
};

typedef struct Node node;

//no cabeca
node* head = NULL;

//funcoes e procedimentos para manipular a lista
void criar(node* no);
void menu(node* no);
void insereComeco(node* no, int valor);
void insereFinal(node* no, int valor);
void removerComeco(node* no);
void removerFinal(node* no);
void removerTudoFinal(node *no);
void mostrar(node* no);
void mostrarIn(node* no);
void busca(node* no, int valor);
int vazio(node* no);

int main(void){
	node* no = (node*) malloc(sizeof(node));
	if(no == NULL){
		printf("Sem espaco na memoria! \n");
		exit(0);
	}
	else{
		criar(no);
		menu(no);
	}
	return(0);
}

//criar a lista e aponta o ponteiro para NULL

void criar(node* no){
	no->proximo = NULL;
}

//menu de opcoes
void menu(node* no){
	int opc, valor = 0;
	while(1){
		system("cls");
		printf("[1] INSERIR COMECO \n");
		printf("[2] INSERIR FINAL \n");
		printf("[3] MOSTRAR NORMAL \n");
		printf("[4] MOSTRA INVERTIDO\n");
		printf("[5] BUSCAR VALOR \n");
		printf("[6] REMOVER COMECO \n");
		printf("[7] REMOVER FINAL \n");
		printf("[8] REMOVER TUDO \n");
		printf("[0] SAIR \n");
		scanf("%d", &opc);
		switch(opc){
			case 0:
				exit(0);
			break;
			
			case 1:
				valor = 0;
				system("cls");
				printf(">> Digite o valor para inserir na lista: \n");
				scanf("%d", &valor);
				insereComeco(no, valor);
				printf("O valor %d foi inserido com sucesso! \n");
				printf("Aperte [ENTER] para voltar ao menu principal! \n");
				getch();
			break;
			
			case 2:
				valor = 0;
				system("cls");
				printf(">> Digite o valor para inserir na lista: \n");
				scanf("%d", &valor);
				insereFinal(no, valor);
				printf("O valor %d foi inserido com sucesso! \n");
				printf("Aperte [ENTER] para voltar ao menu principal! \n");
				getch();
			break;
	
			case 3:
				system("cls");
				if(!vazio(no)){
					printf("Lista Normal: \n");
					mostrar(no->proximo);
					printf("\n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
				else{
					printf("Lista vazia! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
			break;
			
			case 4:
				system("cls");
				if(!vazio(no)){
					printf("Lista Invertida: \n");
					mostrarIn(no->proximo);
					printf("\n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
				else{
					printf("Lista vazia! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
			break;
			
			case 5:
				system("cls");
				if(!vazio(no)){
					valor = 0;
					printf(">> Digite o valor que voce que verificar na lista: \n");
					scanf("%d", &valor);
					busca(no, valor);
					getch();
				}
				else{
					printf("Lista vazia! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
			break;
			
			case 6:
				system("cls");
				if(!vazio(no)){
					removerComeco(no);
					printf("Removido com sucesso! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
				else{
					printf("Lista vazia! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
			break;
			
			case 7:
				system("cls");
				if(!vazio(no)){
					removerFinal(no);
					printf("O valor foi Removido com sucesso! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
				else{
					printf("Lista vazia! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
			break;
			
			case 8:
				system("cls");
				if(!vazio(no)){
					removerTudoFinal(no);
					printf("Todos valores foram Removido com sucesso! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
				else{
					printf("Lista vazia! \n");
					printf("Aperte <ENTER> para voltar ao MENU. \n");
					getch();
				}
			break;
			
			default:
				system("cls");
				printf("Opcao invalida! \n");
				printf("Aperte <ENTER> para voltar ao MENU. \n");
				getch();
			break;
		}
	}
	
}

//insere e remover no comeco;

void insereComeco(node* no, int valor){
	
	node *novo = (node*) malloc(sizeof(node));
	novo->info = valor;
	head = no->proximo;
	no->proximo = novo;
	novo->proximo = head;
}

void removerComeco(node* no){
	node* tmp = no->proximo;
	no->proximo = tmp->proximo;
}

//INSERE E REMOVO NO FINAL

void insereFinal(node* no, int valor){

	node *novo = (node*) malloc(sizeof(node));
	novo->info = valor;
	novo->proximo = NULL;
	if (vazio(no)){
		no->proximo = novo;	
	}
	else
	{
		node *tmp = no->proximo;
		while(tmp->proximo != NULL)
			tmp = tmp->proximo;
		
		tmp->proximo = novo;
	}
}



void removerFinal(node* no){	
	node *tmp, *aux;
	tmp = no->proximo;	
	while(tmp->proximo != NULL)
	{
		aux = tmp;
		tmp = tmp->proximo;
	}
	aux->proximo = NULL;
}

//REMOVE TUDO APARTIR DO FINAL DA LISTA

void removerTudoFinal(node *no){
	node *tmp = no->proximo;
	while(tmp!=NULL){
		no->proximo = tmp->proximo;
		tmp = tmp->proximo;
	}
}


//MOSTRA AS INFORMACOES 

void mostrar(node* no){
	if(no){
		printf("<-(%d)", no->info);
		mostrar(no->proximo);
	}
	/*
	node *tmp = no->proximo;
	printf("Lista Normal: \n");
	while(tmp!=NULL){
		printf("<-(%d)", tmp->info);
		tmp = tmp->proximo;
	}
	printf("\n\n");
	*/
}

// MOSTRA AS INFORMACOES DE TRAS PARA FRENTE
void mostrarIn(node* no){
	if(no){
		mostrarIn(no->proximo);
		printf("<-(%d)", no->info);
	}
}

// O USUARIO FORNECE O VALOR PARA VER SE CONSTA NA LISTA ELE MOSTRAR
//UMA MENSAGEM SE O VALOR FOR ENCONTRADO OU SENAO FOR ENCONTRADO TBM.

void busca(node* no, int valor){
	
	int resultado, achou = 0;
	
	node *tmp = no->proximo;
	
	while(tmp!=NULL){
		if(valor == tmp->info){
			achou = 1;
			resultado = tmp->info;
		}
		tmp = tmp->proximo;
	}
	
	if(achou == 0){
		system("cls");
		printf("Nenhum valor foi encontrado com esse valor passado! \n");
		printf("Aperte <ENTER> para voltar ao MENU. \n");
		getch();
	}
	else{
		system("cls");
		printf("\nO valor %d foi encontrado na lista! \n", resultado);
		printf("Aperte <ENTER> para voltar ao MENU. \n");
		getch();
	}
	
}

//FUNCAO PARA VERIFICAR SE O NO ESTA APONTANDO PARA NULL

int vazio(node* no){
	if(no->proximo == NULL)
		return 1;
	else 
		return 0;	
}

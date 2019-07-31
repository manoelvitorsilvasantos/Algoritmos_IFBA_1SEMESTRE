#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define lin 5
#define col 5

void ordenar(int m[lin][col], int tam);
void inserir(int m[lin][col]);
void mostrar(int m[lin][col], const char *texto);

int tam = (lin+col)/2;

int main(void){
	
	int m[lin][col], opc;

	while(1){
		system("cls");
		printf("[1]Continuar ou [0]Sair: \n");
		scanf("%d", &opc);
		switch(opc){
			case 0:
				exit(0);
			break;
			
			case 1:
				inserir(m); 
				mostrar(m, "Matriz normal");
				ordenar(m, tam-1);
				mostrar(m, "Matriz Ordenada");
				getch();
			break;
			
			default:
				system("cls");
				printf("Opcao invalida! \n");
				getch();
			break;
		}
	}
	
	return 0;
}


void ordenar(int m[lin][col], int tam){
	int cont = 0;
	int i, j, z, t;
	
	while(cont < (tam+1)){ //percorre as linhas da matriz e ordena de acordo com os valores do inicio ao final
	
		for(i = 0; i < tam; i++){
			for(j = i, z = i; j < tam; j++){
				if(m[cont][j] < m[cont][z]){
					z = j;
				}
			}
			t = m[cont][i];
			m[cont][i] = m[cont][z];
			m[cont][z] = t;
		}
		cont++;
	}

}


void inserir(int m[lin][col]){
	
	int i, j;
	srand((unsigned int) time(NULL));
	for(i =0; i< lin; i++){
		for(j = 0; j < col; j++){
			m[i][j] = 0+(rand()%100);
		}
	}
}

void mostrar(int m[lin][col], const char *texto){
	int i, j;
	printf("\n	%s \n", texto);
	printf("============================\n");
	for(i =0; i< lin; i++){
		for(j = 0; j < col; j++){
			printf(" [%2d]", m[i][j]);	
		}
		printf("\n");
	}
	printf("============================\n");
	printf("\n\n\n");
}


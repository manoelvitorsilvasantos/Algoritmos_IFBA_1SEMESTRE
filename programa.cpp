/*Algoritmo de conversao e portas logicas*/
/*Programa desenvolvido por Manoel Vitor - 1� semestre de ADS*/

#include <stdio.h> // biblioteca principal da Linguagem c - utilizada para entrada e saida de dados
#include <stdlib.h> // Biblioteca utilizada para  'fun��es'  relacionada ao alocamente de memoria


/* 'Procedimento' que simula as portas logicas*/

void portas(){
	
	
	
	
}





int main(){ // FUN��O PRINCIPAL DO PROGRAMA

int x, i, b;
char opc;


/*A principio, estou utilizando um comando do SO windows,
especificamente o comando 'color' para custumizar meu algoritmo com cores, porem eu preciso usar a 'fun��o' system(), para poder executar esses comandos
direto do meu programinha compilado em C */
system("color 9f");  // funcao system()





/* Do...While - ou fa�a..enquanto - essa 'estrutura de repeti��o' e responsavel por pegar 
uma condicao que no caso seria minha variavel 'opc', se ele for diferente de 0, ele repetir� novamente, caso contr�rio 
fechar� o nosso programa.*/



do{

//'fun��o'  de saida de dados, a 'fun��o'  printf() � uma 'fun��o'  respons�vel por mostrar nosso texto na tela.
printf("\nDigite uma opcao:\n"); //exiba
printf("\n[c] CONVERSOR\n[p] PORTAS LOGICAS\n\[s] SAIR\n"); 


//'fun��o'  de entrada de dados, a 'fun��o'  scanf() e uma funcao respons�vel por pegar os dados digitados pelo usuario.
scanf("%s", &opc); 	//Leia

switch(opc){
	
case 'c':
case 'C':

printf("\nDigite um valor inteiro:\n");
scanf("%d", &x);

for(i == 7; i >= 0; i--){
	
b = x >>i;	
	

if(b & 1){
	
printf("1");
	
}
else{

printf("0");	
	
}


}	
	
break;
	
	
}
	
	
	


} while(opc != 's' || opc != 'S');






system("pause"); //'fun��o'  system(), essa 'fun��o'  e respons�vel por executar os comandos do sistema ms-dos

return(0); //retorno 0

}


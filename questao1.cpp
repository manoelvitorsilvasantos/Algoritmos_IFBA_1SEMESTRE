
//Bibiotecas padroes da linguagem C
#include <stdio.h>
#include <stdlib.h>


int main(){ //A funcao principal do meu programa


float valor; // variavel float 
int contador = 0; // variavel do meu contador


//comandos operacionais do windows ou ms-dos
system("ECHO ON");  
system("COLOR 0B"); // setando cor no meu prompt
system("TITLE  Questão 1- "); // colocando o titulo no topo

printf("\nDigite um valor:\n"); // pede que o usuario digite um valor no prompt para a variavel
scanf("%f", &valor); // funcao que pega o valor digitado no prompt


while(valor > 1){ // enquanto a variavel 'valor' for maior que 1 ele repete

valor = valor/2; // divisao da variavel 'valor' e armazena o resultado na propria variavel 'valor'
contador += 1; // um acrescimo no meu contador de vezes em que a operacao de divisao, foi feita na variavel 'valor'.
 

}

printf("\nResultado foi: '%f' \n", valor); 
printf("\bQuantidade de vezes que foi dividida: '%d' \n", contador); //aqui mostra quantas vezes as variavel 'valor' foi divida.


system("pause");

}


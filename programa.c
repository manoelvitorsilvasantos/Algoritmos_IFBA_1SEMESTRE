#include <stdio.h>
#include <stdlib.h>

void main(){


int b, i, valor, opc;


	
system("color 9f");


do{

system("echo !--------------------!");
system("echo !--------------------!");	
system("echo !  Digite uma opcao  !");
system("echo !  [1] - Conversor   !");
system("echo !  [2] - Portas      !");
system("echo !  [0] - Sair        !");
system("echo !--------------------!");
system("echo !--------------------!");

scanf("%d", &opc);

if(opc == 1){

printf("\nDigite um valor inteiro:\n");
scanf("%d", &valor);

for(i == 7; i >= 0; i--){
	
b = valor >>i;
if(b & 1){
printf("1");
}
else{
printf("0");	
}


	
}
	
}
else if(opc == 2){
	
	
}

} while(opc !=  0);

system("pause");
	
}

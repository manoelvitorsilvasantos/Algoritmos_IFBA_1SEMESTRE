#include <stdio.h>
#include <stdlib.h>


char opc; // variavel de opcao
int x, p = 0, i = 0;




int main(){


//*Meus comandos do prompt do windows ou ms-dos*//

system("ECHO ON");
system("COLOR 0B");
system("TITLE  Questão 2- ");




//*enquanto minha opcao nao for igual a n minusculo e maiuscula ele repete*//
while((opc != 'N') && (opc != 'n')){


printf("\nVoce deseja adicionar esse valor\n\n[S] sim ou [N] nao\n");
scanf("%s", &opc);



if((opc == 's') || (opc == 'S')){ 

printf("\nDigite um valor:\n");
scanf("%d", &x);

if((x%2==0)){ // se x for par

p+=1; // contador para par


}
else if((x%2!=0)){ // se x for impar

i+=1; // contador para impar



 }

}


}




printf("\nnumeros PARES [%d] \n", p);
printf("\nnumeros IMPARES [%d] \n", i);

system("echo Aperte [ENTER] para Fechar!");
system("pause");


return (0);

}

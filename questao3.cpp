#include <stdio.h>
#include <stdlib.h>

int main(){

int idade;
int i = 0, m = 0;


system("ECHO ON");
system("COLOR 0B");
system("TITLE  Questão 3- ");


do{
	
	printf("\nDigite a idade:\n");
	scanf("%d", &idade);
	
	if(idade != 0){
		
		
		if(idade >= 18){
			
			m+=1;
		}
		
        i+=1;
        /*
		i+=1;

         if(idade >= 18) m+=1;
         */
		   

}

}while(i < 10 && idade != 0);
	


printf("\nTemos %d pessoas maiores de 18.\n", m);

system("pause");


}


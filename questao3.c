#include <stdio.h>
#include <stdlib.h>

int main(){

int idade, valor,  contador = 0, maior = 0;


system("ECHO ON");
system("COLOR 0B");
system("TITLE  Questão 2- ");



do{

printf("\nDigite a idade:\n");
    scanf("%d", &idade);

 if(idade != 0){




    if(idade > 17){

        maior += 1;

    }

    contador+=1; //Meu contador responsavel


 }


}while(contador >= 1 && contador <= 10 && idade !=0);
printf("temos %d adultos. " , maior);

system("pause");

return 0;

}

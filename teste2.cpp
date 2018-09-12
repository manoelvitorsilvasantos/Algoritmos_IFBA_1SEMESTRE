#include <stdio.h>
#include <stdlib.h>


char opc;
int x;
int p = 0, i = 0;


 main(){

system("color 9f");





while((opc != 'N') && (opc != 'n')){


printf("\nVoce deseja adicionar esse valor\n\n[S] sim ou [N] nao\n");
scanf("%s", &opc);



if((opc == 's') || (opc == 'S')){

printf("\nDigite um valor:\n");
scanf("%d", &x);

if((x%2==0)){

p+=1;


}
else if((x%2!=0)){

i+=1;



 }

}


}




printf("\nnumeros pares [%d] \n", p);
printf("\nnumeros impares [%d] \n", i);

system("pause");

return (0);

}

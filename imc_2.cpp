/*Exemplo de Codigo em C - Usando o DEVCPP+*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// variaveis
float peso, altura, imc;
char opc;

//funcao de retorno - que utilizo para calcular indice de massa corporea
float CalcularImc(float peso, float altura){

return ((peso)/(pow(altura, 2)));

}



int main(){


system("color 9f"); // seta um cor na tela do prompt

printf("\a");//toca um bip
printf("\nSelecione seu Sexo:\n");
printf("\nDigite [H] para Homens e [M] para Mulheres\n");
scanf("%s", &opc);

switch(opc){ //pega o sexo da pessoa

//ser for homem
case 'H':
case 'h':

system("color 90");
printf("\a");
printf("\nDigite seu peso:\n");
scanf("%f", &peso);

printf("\a");
printf("\nDigite sua altura:\n");
scanf("%f", &altura);

imc = CalcularImc(peso, altura);

if(imc < 20) printf("\nSexo Masculino \n Voce esta abaixo do peso\n Seu imc foi: [%2.1f]\n", imc);

else if(imc  >= 20 && imc <= 24.9) printf("\nSexo Masculino \n Voce esta com peso ideal\n Seu imc foi: [%2.1f]\n", imc);

else if(imc >= 25 && imc <= 29.9) printf("\nSexo Masculino \n Voce esta com peso ideal\n Seu imc foi: [%2.1f]\n", imc);

else if(imc >= 30 && imc <= 39.9 ) printf("\nSexo Masculino \n Voce esta com peso ideal\n Seu imc foi: [%2.1f]\n", imc);

else if(imc > 43) printf("\nSexo Masculino \n Voce esta com peso ideal\n Seu imc foi: [%2.1f]\n", imc);

break;

//mulheres
case 'M':
case 'm':

system("color d0 ");
printf("\a");
printf("\nDigite seu peso:\n");
scanf("%f", &peso);

printf("\a");
printf("\nDigite sua altura:\n");
scanf("%f", &altura);

imc = CalcularImc(peso, altura);

if(imc < 19) printf("\nSexo Feminino \n Voce esta abaixo do peso\n Seu imc foi: [%2.1f]\n", imc);

else if(imc  >= 19 && imc <= 23.9) printf("\nSexo Feminino \n Voce esta com peso ideal\n Seu imc foi: [%2.1f]\n", imc);

else if(imc >= 24 && imc <= 28.9) printf("\nSexo Feminino \n Voce esta com peso ideal\n Seu imc foi: [%2.1f]\n", imc);

else if(imc >= 29 && imc <= 38.9 ) printf("\nSexo Feminino \n Voce esta com peso ideal\n Seu imc foi: [%2.1f]\n", imc);

else if(imc > 39) printf("\nSexo Feminino \n Voce esta com peso ideal\n Seu imc foi: [%2.1f]\n", imc);


break;


}



system("pause");

return(0);

}


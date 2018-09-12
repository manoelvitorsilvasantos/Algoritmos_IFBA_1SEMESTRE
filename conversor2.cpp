#include <stdio.h>
#include <stdlib.h>



void portaXOR(){  //Funcao da porta XOR
	
int x, y;

printf("\nSimulador de porta logica XOR\n");
printf("Digite unico digito para cada entrada da porta ou [0] ou [1]\n");
 
printf("\nDigite o valor para a entrada [x]:");
scanf("%d", &x);


printf("\nDigite o valor para a entrada [y]:");
scanf("%d", &y); 

if(x < 0 &&  y < 0){

printf("\ndigite ou [0] ou [1].\n\n");

}
else if( x > 1 && y > 1){

printf("\ndigite ou [0] ou [1].\n\n");
	
}
else if(x > 1 && y == 0 || y > 1 && x == 0){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x < 0 && y == 0 || y < 0 && x == 0){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x > 1 && y == 1 || y > 1 && x == 1){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x < 0 && y == 1 || y < 0 && x == 1){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}

//

else{

// 

if(x == 0 && y == 0){
	
system("color 0f");
printf("\n[Lampada DESLIGADA]\n\n");

}
else if(x == 0 && y == 1){
    
system("color f0");
printf("\n[Lampada LIGADA]\n\n");

}
else if(x == 1 && y == 0){
    
system("color f0");
printf("\n[Lampada LIGADA]\n\n");

}
else if(x == 1 && y == 1){

system("color 0f");
printf("\n[Lampada DESLIGADA]\n\n");

}

//
	
}

}
void portaOR(){  //Funcao da porta OR

int x, y;

printf("\nSimulador de porta logica OR\n");
printf("Digite unico digito para cada entrada da porta ou [0] ou [1]\n");
 
printf("\nDigite o valor para a entrada [x]:");
scanf("%d", &x);

printf("\nDigite o valor para a entrada [y]:");
scanf("%d", &y); 

if(x < 0 &&  y < 0){

printf("\ndigite ou [0] ou [1].\n\n");

}
else if( x > 1 && y > 1){

printf("\ndigite ou [0] ou [1].\n\n");
	
}
else if(x > 1 && y == 0 || y > 1 && x == 0){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x < 0 && y == 0 || y < 0 && x == 0){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x > 1 && y == 1 || y > 1 && x == 1){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x < 0 && y == 1 || y < 0 && x == 1){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}

//

else{

// 
if(x == 0 && y == 0){
	
system("color 0f");
printf("\n[Lampada DESLIGADA]\n\n");

}
else if(x == 0 && y == 1){
    
system("color f0");
printf("\n[Lampada LIGADA]\n\n");

}
else if(x == 1 && y == 0){
    
system("color f0");
printf("\n[Lampada LIGADA]\n\n");

}
else if(x == 1 && y == 1){

system("color f0");
printf("\n[Lampada LIGADA]\n\n");

}


//

}

}

void portaAND(){ //Funcao da porta AND
	
int x, y;
 
printf("\nSimulador de porta logica AND\n");
printf("Digite unico digito para cada entrada da porta ou [0] ou [1]\n");
 
printf("\nDigite o valor para a entrada [x]:");
scanf("%d", &x);

printf("\nDigite o valor para a entrada [y]:");
scanf("%d", &y); 

if(x < 0 &&  y < 0){

printf("\ndigite ou [0] ou [1].\n\n");

}
else if( x > 1 && y > 1){

printf("\ndigite ou [0] ou [1].\n\n");
	
}
else if(x > 1 && y == 0 || y > 1 && x == 0){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x < 0 && y == 0 || y < 0 && x == 0){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x > 1 && y == 1 || y > 1 && x == 1){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}
else if(x < 0 && y == 1 || y < 0 && x == 1){

printf("\nVoce so pode digitar [1] ou [0]\n\n");	

}

//

else{

// 

if(x == 0 && y == 0){

system("color 0f");
printf("\n[Lampada DESLIGADA]\n\n");

}
else if(x == 0 && y == 1){

system("color 0f");
printf("\n[Lampada DESLIGADA]\n\n");
	
}
else if(x == 1 && y == 0){

system("color 0f");
printf("\n[Lampada DESLIGADA]\n\n");
	
}
else if(x == 1 && y == 1){

system("color f0");
printf("\n[Lampada LIGADA]\n\n");
	
} 
 
//

}
 
}

//	INICIO DO MEU PROGRAMA - Comeco da funcao principal do programa
main(){


int b, i, x ;       //Minha variavel inteiro
char opc;   //Minha variavel de cadeia de caractere

// Enquanto meu cadeia de caracter for diferente  de 0, ele repitira esse bloco de codigo

do{
//funcao que executa comandos operacionais no meu programa
//No meu caso eu uso o proprio prompt do windows para mudar a cor e o titulo do meu 
//programinha que eu fiz.


system("color 2f");
system("title [Conversor de Numeross - Simulador de Porta Logicas]");
system("echo !=================================================!");
system("echo !-------------------------------------------------!"); 
system("echo !          Conversor de Numeros                   !");
system("echo !     Converte decimal para Hexadecimal e Binario !");
system("echo !                                                 !");
system("echo !               Digite uma Opcao                  !");
system("echo !     (1) - Decimal para Hexadecimal e Binario    !");
system("echo !     (2) - Simulador de Portas Logicas           !");
system("echo !     (0) - Sair                                  !");
system("echo !-------------------------------------------------!");
system("echo !=================================================!");

//Apos ele executar esses comandos operacionai no prompt do ms-dos, ele a vai pegar
//os valor digitado, e se o valor coencidir com umas da minhas condicoes embaixo
//executara uma sequencia de comandos. que vai depender das escolhas feitas atraves
//do texto informativo, em cima deste comentario kkkk. E pegando como referencia os
//numeros correspondentes a referencia da mensagem do comando echo do ms-dos.

scanf("%s", &opc);

//Essa condicao vai converter decimais para hexadecimal e binario
if(opc == '1'){
	
printf("Digite O valor em decimal:\n");
scanf("%d", &x);

printf("\n\n");

//pega um numero de 16 bits para converter-lo


for(i = 16; i >= 0; i--){

// passa em cada 

b = x >> i;

if(b & 1){
	
printf("1");	

}
else{

printf("0");	

}
}



printf("\n\n");
printf("Em hexadecimal [%X]\n\n", x );

system("echo Aperte [ENTER] para voltar ao Menu\n\n");
system("pause");
system("break");

}
else if(opc == '2'){ 
	 int op;
	 
	do{
		
		
		printf("Digite uma Opcao do Menu\n");
		printf("1 - PORTA AND\n");
		printf("2 - PORTA OR\n");
		printf("3 - PORTA XOR\n");
		printf("0 - SAIR\n");
		
		scanf("%d", &op);
		
		if(op == 1){
			
		portaAND();	
		
		}
		else if(op == 2){
			
		portaOR();
			
		}
		else if(op == 3){
		
		portaXOR();
			
		}
		else if(op != 0 && op >= 4){
			printf("Opcao invalida, tente novamente.\n\n\n");
		}
		
     	}while(op != 0);
	
}
else if(opc != '0' ||opc != '1' ||opc != '2') {
	printf("Opcao invalida, tente novamente.\n\n\n");
}
	
} while(opc != '0');

printf("Encerrando...\n");

system("echo Aperte [ENTER] para fechar completamente...");
system("pause");

}

//Final da funcao principal do programa

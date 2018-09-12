/*****************************************************************************************************************************//*


    RELATORIO TECNICO
    DATA 03 DE AGOSTO DE 2018 - QUINTA-FEIRA
    DOCENTE - THIAGO FERNANDES
    DISCENTE - MANOEL VITOR S. SANTOS

    PROBLEMAS COM ALGUMAS BIBLIOTECAS - VOU DEIXAR O LINK EMBAIXO
    https://github.com/mvictor10/bibliotecas-c

    biblioteca adicional - conio.h, myconio.h, myconio.c

    LEMBRANDO QUE EU USEI O IDE NO WINDOWS 7 -  32 BITS

    USANDO O CODE BLOCKS

*//******************************************************************************************************************************/

// BIBLIOTECAS DA LINGUAGEM C/C++
#include <stdio.h> // BIBLIOTECA PRINCIPAL DO C/C++
#include <conio.h>
#include <stdlib.h>

    void CONVERSOR(void); //procedimento CONVERSOR - que converte decimal em binarios etc...
    void PORTAS(void); //procedimento PORTAS - para simular as portas logicas.
    void CREDITOS(void); // procedimento que mostra os creditos do desenvolvedor.
    void AND(void); // procedimento da porta logica AND.
    void OR(void); // procedimento da porta logica OR.
    void XOR(void); //procedimento da porta logico XOR.
    int AND_VERIFICA(int x, int y); //funcao de retorno para manipular a porta logica AND.
    int OR_VERIFICA(int x, int y); //funcao de retorno para manipular a porta logica OR.
    int XOR_VERIFICA(int x, int y); //funcao de retorno para manipular a porta logica XOR.

// FUNCAO PRINCIPAL DO PROGRAMA
int main(){

    //======================================================= VARIAVEL NAO GLOBAL =============================================//
    int MENU;
    //ESTRUTURA DE REPETICAO DO...WHILE

    /**************************************************************************************************************************/
    /*

        FAZ A EXECUCAO DO BLOCO DE CODIGO DENTRO DA ESTRUTURA DE REPETICAO DO...WHILE, ENQUANTO O VALOR DA VARIVAEL 'MENU' for
        MAIOR QUE ZERO, CASO CONTRARIO E E PARA DE EXECUTAR O BLOCO DE CODIGO.

        *O USUARIO DIGITAR UM VALOR INTEIRO CORRESPODENTE A OPCAO DO MENU E SE FOR MAIOR QUE ZERO ELE EXECUTA O BLOCO DE CODIGO.

    */
    /*************************************************************************************************************************/

    do{ //EXTRUTURA DE REPETIÇÃO - Do..While - FACA...ENQUANTO ATENDER A CONDICAO

        printf("\n[1] - CONVERSOR\n");
        printf("\n[2] - PORTAS LOGICAS\n");
        printf("\n[3] - CREDITOS\n");
        printf("\n[0] - SAIR\n");
        scanf("%d", &MENU);
        system("cls");

        switch(MENU){ //estrutura condicional -
            case 1: CONVERSOR();
            break;
            case 2: PORTAS();
            break;
            case 3: CREDITOS();
            break;
        }
    } while(MENU > 0); // ENQUANTO O VALOR DA VARIAVEL MENU FOR MAIOR QUE ZERO VAI REPETIR.

    getch();
    return 0;
}

void CONVERSOR(void){

    long numero, binario = 0, resto, base  = 1;
    int num;
    printf("\nDigite um valor INTEIRO p/ converter em binario e Hexadecimal: \n");
    scanf("%ld", &numero);
    num =  (int)numero; // converte um long em int.
    //printf("\nDigite o mesmo numero novamente: \n");
    //scanf("%d", &num);


    while(numero > 0){
        resto = numero%2; // atribui a variavel resto o modulo do numero por 2.
        binario = binario+resto*base; // atribui o resultado da soma do binario com o resto multiplicado pela base.
        numero = numero/2; //attribui  a variavel  numero, o numero divido por 2.
        base = base*10; //atribui a variavel base a base vezes 10.
    }
    printf("\nEm binario: %ld\t Em Hexadecimal: %X\n", binario, num);
}
void PORTAS(void){

    int menu1, zero, um, i;

    do{
        printf("\n[1] - PORTA AND\n");
        printf("\n[2] - PORTA OR\n");
        printf("\n[3] - PORTA XOR\n");
        printf("\n[0] - SAIR\n");
        scanf("%d", &menu1);
        system("cls");

        switch(menu1){ //opcoes
        case 1: AND();
        break;
        case 2: OR();
        break;
        case 3: XOR();
        break;

        }

    } while(menu1 > 0);
}
void CREDITOS(void){

    printf("\nDocente THIAGO FERNANDES\n");
    printf("\nDiscente MANOEL VITOR S. SANTOS\n");
    printf("\nPrimeiro Semestre de ADS\n");
    printf("\nIFBA - Campus Irece\n\n\n");
    printf("\nAperte <ENTER> para voltar ao menu.\n");
    getch();
    system("cls");

}

void AND(void){
    int x, y;
    printf("\nDigite ZERO[0] ou UM[1]\n");
    printf("\nDigite um valor para porta (x):\n");
    scanf("%d", &x);
    printf("\nDigite um valor para porta (y):\n");
    scanf("%d", &y);
    AND_VERIFICA(x, y);
}

void OR(void){
    int x, y;
    printf("\nDigite ZERO[0] ou UM[1]\n");
    printf("\nDigite um valor para porta (x):\n");
    scanf("%d", &x);
    printf("\nDigite um valor para porta (y):\n");
    scanf("%d", &y);
    OR_VERIFICA(x, y);
}

void XOR(void){
    int x, y;
    printf("\nDigite ZERO[0] ou UM[1]\n");
    printf("\nDigite um valor para porta (x):\n");
    scanf("%d", &x);
    printf("\nDigite um valor para porta (y):\n");
    scanf("%d", &y);
    XOR_VERIFICA(x, y);
}

int AND_VERIFICA(int x, int y){

    if(x == 0 && y == 0){
        printf("\nDESLIGADA\n");
    }
    else if(x == 1 && y == 0){
        printf("\nDESLIGADA\n");
    }
    else if(x == 0 && y == 1){

        printf("\nDESLIGADA\n");
    }
    else if(x == 1 && y == 1){

        printf("\nLIGADA\n");
    }

    return x, y;
}
int OR_VERIFICA(int x, int y){

    if(x == 0 && y == 0){

        printf("\nDESLIGADA\n");
    }
    else if(x == 1 && y == 0){

        printf("\nLIGADA\n");
    }
    else if(x == 0 && y == 1){

        printf("\nLIGADA\n");
    }
    else if(x == 1 && y == 1){

        printf("\nLIGADA\n");
    }

    return x, y;

}
int XOR_VERIFICA(int x, int y){

    if(x == 0 && y == 0){

        printf("\nDESLIGADA\n");
    }
    else if(x == 1 && y == 0){

        printf("\nLIGADA\n");
    }
    else if(x == 0 && y == 1){

        printf("\nLIGADA\n");
    }
    else if(x == 1 && y == 1){

        printf("\nDESLIGADA\n");
    }

    return x, y;
}


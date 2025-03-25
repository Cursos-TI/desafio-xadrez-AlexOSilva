#include <stdio.h>
int main(){

    //Desafio de Xadrez - MateCheck
int i = 0;
int escolha;

//Menu de escolha para interação com o usuario.
//Torre
printf("**Escolha qual peça queira jogar!!**\n");
printf("1.Torre\n");
printf("2.Bispo\n");
printf("3.Rainha\n");
printf("4.Cavalo\n");
scanf(" %d" , &escolha);


switch(escolha) {

case 1 :

printf("Torre 5 casas a direita\n");
    for(int i = 0; i< 5 ; i++){
        printf("Direita \n");  // Imprime a direção do movimento }
     }


break;

//Bispo
case 2 :
printf("Bispo 5 casas para Cima Direita\n");
while(i<5) {
    
    printf("Cima , Direita\n"); // Imprime a direção do movimento 
       
    i ++ ;
}
break;

//Rainha
case 3:
printf("Rainha 8 casas para a esquerda \n");
do {
   printf("Esquerda\n"); // Imprime a direção do movimento 
       

  i++;

}while(i < 8);


break;

//Cavalo
case 4:
printf("Cavalo mover duas casas para cima e uma casa para a direita \n");
for(i=0;i<=2; i++) {              
    printf("Cima\n"); 
    while(i==1){
        printf("Direita\n");
        i++;
    }

}

break;

default :
printf("Opção invalida , tente novamente!!\n");

}

return 0;
}














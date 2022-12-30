#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    //int Q = 42;
	int input; 
	int segundos = time(0);
	srand(segundos);
	int R = rand ();
	int Q = R % 100;
	int NúmeroT = 10;
	int vida = 1000;
	int score; 
    int i = 0;
	printf("*****************************\n");
	printf("bem vindo ao meu jogo\n");
	printf("******************************\n\n\n");
   while (i < NúmeroT){	
    printf("vc deu %d de %d chances\n", i, NúmeroT);
	printf("Adivnhe o numero que vou pensar\n\n\n\n");
	scanf("%d", &input);
	if (input < 0){
		printf("Vc não pode chutar números negativos,kkkkkkkkkkk\n");
	    i--;
		continue;
	}
	
	if (input == Q){
		printf("Parabéns seu porra!!!!!!!\n");       
		break;
		}
	else {
		printf("achou errado otario!!!!!\n");
		printf("Nice Try\n");
		}
	i++;
	}
	score = 1000 - (i * 100);
	printf("vc terminou com %d pontos de vida\n", score);
	printf("fim de jogo!!!!\n");
	printf("%d\n", Q);
	return 0;
}


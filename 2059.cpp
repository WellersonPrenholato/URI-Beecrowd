#include <stdio.h>

int main (){
	
	int p, j1, j2, r,a;
	int soma, parimpar;
	
	scanf("%d", &p);
	scanf("%d", &j1);
	scanf("%d", &j2);
	scanf("%d", &r);
	scanf("%d", &a);
	
	soma = j1 +j2;
	
	if (soma %2 == 0){
		parimpar = 0; // par
	}else{
		parimpar = 1; // impar
	}
	
	// Ganhador 1
	if (p == 1 && parimpar == 0 && r ==0 && a==0){// p == 1 par jogador 1
		printf("Jogador 1 ganha!\n");
	}else if (p == 0 && parimpar == 1 && r ==0 && a ==0 ){ // p ==0 impar jogador 1
		printf("Jogador 1 ganha!\n");
	}else if (r ==1 && a ==0){// Jogador 1 roubou
		printf("Jogador 1 ganha!\n");
	}else if (r == 1 && a == 1){//Acusou o roubo
		printf("Jogador 2 ganha!\n");
	}else if (p==1 && parimpar == 1 && r ==0 && a==0){
		printf("Jogador 2 ganha!\n");
	}else if (p==0 && parimpar ==0 && r ==0 && a==0){
		printf("Jogador 2 ganha!\n");
	}else if (r ==0 && a ==1){
		printf("Jogador 1 ganha!\n");
	}
	
	return 0;
}

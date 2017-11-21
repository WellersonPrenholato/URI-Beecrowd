#include<stdio.h>

int main (){
	int t, i;
	char n1[10], n2[10];
	
	scanf("%d", &t);
	
	for (i=0; i<t; i++){
		fflush(stdin);
		//gets(n1);
		scanf("%s", n1);
		//gets(n2);
		scanf("%s", n2);
		
		if ((strcmp(n1,"papel")==0)&&(strcmp(n2,"papel")==0)){
			printf("Ambos venceram\n");
		}else if ((strcmp(n1,"ataque")==0)&&(strcmp(n2,"ataque")==0)){
			printf("Aniquilacao mutua\n");
		}else if ((strcmp(n1,"pedra")==0)&&(strcmp(n2,"pedra")==0)){
			printf("Sem ganhador\n");
			
		}else if ((strcmp(n1,"ataque")==0)&&(strcmp(n2,"pedra")==0)){
			printf("Jogador 1 venceu\n");			
		}else if ((strcmp(n1,"pedra")==0)&&(strcmp(n2,"ataque")==0)){
			printf("Jogador 2 venceu\n");
			
		}else if ((strcmp(n1,"pedra")==0)&&(strcmp(n2,"papel")==0)){
			printf("Jogador 1 venceu\n");
		}else if ((strcmp(n1,"papel")==0)&&(strcmp(n2,"pedra")==0)){
			printf("Jogador 2 venceu\n");
			
		}else if ((strcmp(n1,"ataque")==0)&&(strcmp(n2,"papel")==0)){
			printf("Jogador 1 venceu\n");
		}else if ((strcmp(n1,"papel")==0)&&(strcmp(n2,"ataque")==0)){
			printf("Jogador 2 venceu\n");		
		}
	}
	
	return 0;
}

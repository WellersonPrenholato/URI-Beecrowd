#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,partida, i;
	
	scanf("%d", &partida);
	
	for(i=partida; i< partida + 12; i++){
		if (i % 2 != 0){
			printf("%d\n", i);
			
		}	
	}
	
	return 0;
}

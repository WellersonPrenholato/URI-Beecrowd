#include<stdio.h>
#include<stdlib.h>

int main(){
	int contador, i;
	double n[6];
	
	contador =0;
	
	for (i =0 ; i<6; i++){
		scanf("%lf", &n[i]);
		
		if ( n[i] >0){		
		contador = contador +1;
		}

	}
	printf("%d valores positivos\n", contador);	
	return 0;	
}

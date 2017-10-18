#include<stdio.h>
#include<stdlib.h>

int main(){
	int contador, i;
	double n[6], soma, media;
	
	contador =0;
	soma = 0;
	
	for (i =0 ; i<6; i++){
		scanf("%lf", &n[i]);
		
		if ( n[i] >0){		
		contador = contador +1;
		soma += n[i];
		media = soma/contador;
		}

	}

	printf("%d valores positivos\n", contador);
	
	printf("%.1lf\n", media);	
	return 0;	
}

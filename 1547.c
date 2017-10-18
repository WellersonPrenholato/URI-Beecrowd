#include<stdio.h>
#include<math.h>

int main (){
	int t, qt[10], s, n, x[10];
	int i, j;
	int indice, menor; 
	
	scanf("%d", &t);
	for(i=1; i<=t; i++){
		scanf("%d", &n); // repetiçoes
		scanf("%d", &s); // valor do sorteio
		
		for(j=1; j<=n; j++){
			scanf("%d", &qt[j]);
			x[j] = abs(qt[j]- s);
		}
		
		menor = 101;
		for(j=1; j<=n; j++){
			if (qt[j]==s){
				indice = j;
				break;
				
			}else if (menor > x[j]){
				menor= x[j];
				indice = j;
			}
		}
		printf("%d\n", indice);
	}
	return 0;
}


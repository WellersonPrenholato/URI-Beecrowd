#include <stdio.h>

int main (){
	int A, B;
	
	while (A!=B){
		scanf("%d", &A);
		scanf("%d", &B);
		if (A > B){
			printf("Decrescente\n");
		}else if ( B > A){
			printf("Crescente\n");
		}	
	}
	return 0;
}

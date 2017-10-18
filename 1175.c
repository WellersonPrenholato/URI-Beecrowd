#include<stdio.h>

int main (){
	
	int a[20], i, aux;
	
	for (i=0; i<20; i++){ 
		scanf("%d", &a[i]);
	
	}
	for (i =0; i<10; i++){
		aux = a[i];
		a[i]= a[19-i];
		a[19-i]= aux;
	}
		
	for (i=0; i<20; i++){ 
		printf("N[%d] = %d\n", i, a[i]);
	}
	return 0;
}

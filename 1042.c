#include<stdio.h>

int main (){
	
	int i, j, num[3], aux, num2[3];
	
	for(i=0; i<3; i++){
		scanf("%d", &num[i]);
		num2[i] =num[i];
	}
	
	for(i=0; i<3; i++){
		for(j=i+1; j<3; j++){
			if(num[i]>num[j]){
				aux = num[i];
				num[i]=num[j];
				num[j]= aux;
			}
		}
	}
	for(i=0; i<3; i++){
		printf("%d\n", num[i]); 
	}
	printf("\n");
	for(i=0; i<3; i++){
		printf("%d\n", num2[i]); 
	}
	
	return 0;
}

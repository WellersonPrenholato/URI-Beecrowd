#include<stdio.h>

int main (){
	int entrada;
	
	while (scanf("%d",&entrada) != EOF){
		if (entrada == 0){
			printf("vai ter copa!\n");
		}else if (entrada > 0){
			printf("vai ter duas!\n");
		}
	}
	return 0;
}

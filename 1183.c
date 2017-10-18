#include<stdio.h>
#define tam 12
int main (){
	int i, j;
	double soma=0, media=0, a[tam][tam];
	char op;
	
	fflush(stdin);
	scanf("%c", &op);
	
	for (i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			scanf("%lf", &a[i][j]);
			//a[i][j] = rand() % 10;
		}
	}
	/*
	//Apresenta Matriz
	for (i=0; i<tam; i++){
		printf("\n");
		for(j=0; j<tam; j++){
			//scanf("%lf", &a[i][j]);
			printf("%.2lf ", a[i][j]);
		}
	}
	*/
	
	//Verifica Diagonal
	if (op == 'S'){
		for (i=0; i<tam; i++){
			for(j=0; j<tam; j++){
				if(i<j){
					soma += a[i][j];
				}
			}
		}
		printf("%.1lf\n", soma);	
	}else if (op == 'M'){
		for (i=0; i<tam; i++){
			for(j=0; j<tam; j++){
				if(i<j){
					soma += a[i][j];
					media = (soma/(((tam*tam)-tam)/2));
				}
			}
		}	
		printf("%.1lf\n", media);
	}
	
	return 0;
}

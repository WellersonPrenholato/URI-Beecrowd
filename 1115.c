#include<stdio.h>

int main(){
	int x, y;

	while (x!=0 || y!=0){
		x=1;
		y=1;
		scanf("%d", &x);
		scanf("%d", &y);
		
	if (x>0 && y>0){
		printf("primeiro\n");
	}else if (x<0 && y>0 ){
		printf("segundo\n");
	}else if (x<0 && y<0){
		printf("terceiro\n");
	}else if (x>0 && y<0){
		printf("quarto\n");
	}
	else if  (x == 0 || y == 0){
		return 0;
	}
	}		
}

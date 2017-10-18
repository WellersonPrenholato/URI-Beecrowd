#include <stdio.h>

int main(){
	int a, b, c, d, cd, ab;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	cd = c + d;
	ab = a + b;
		
	if (b > c && d > a && cd > ab && c > 0 && d >0){
		if(a % 2 == 0){
		printf("Valores aceitos\n");
		}
	}
	else{
		printf("Valores nao aceitos\n");
	}
    return 0;
}

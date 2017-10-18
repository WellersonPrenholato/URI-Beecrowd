#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c, x;
	int maior, maior1;
	
	scanf("%d %d %d", &a, &b, &c);

	x = (a+b+abs(a-b))/2;
	maior = (x+c+abs(x-c))/2;
	
	printf("%d eh o maior\n", maior);
	
	return 0;
}

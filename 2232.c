#include<stdio.h>
#include<math.h>

int main (){
	int i, num;
	long int a, x;
	scanf("%d",&num);
	
	for (i=0; i<num; i++){
		scanf("%d", &a);
		x = pow(2, a);
		printf("%d\n", x-1);
	}
	
	return 0;
}

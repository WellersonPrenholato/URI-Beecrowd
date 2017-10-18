#include<stdio.h>

int main(){
	int i, j;
	int n;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
			printf("%d %d %d\n", i, i*i, (i*i*i));
			printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
	}
	return 0;
}

#include <stdio.h>

int main (){
	int n,f=1;

	scanf("%d", &n);
	
	for(;n>0 && n<13;--n){
		f= f*n; 	
	}
	printf("%d\n",f);
	return 0;
}

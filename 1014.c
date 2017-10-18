#include<stdio.h>

int main(){
	int dist;
	float combust, result;
	
	scanf("%d",  &dist);
	scanf("%f", &combust);
	
	result = (dist / combust);
	
	printf("%.3f km/l\n", result); 
	return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
	double r, v, pi ;
	
	pi = 3.14159;		
	scanf("%lf", &r);
	
	v = (4/3.0)*3.14159*pow(r,3);
	
	printf("VOLUME = %.3lf\n", v);
	return 0;
}

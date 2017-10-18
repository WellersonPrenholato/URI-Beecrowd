#include<stdio.h>
#include<math.h>

int main(){
	double x1, y1, x2, x3, y3, y2, p1, p2, dist, dist1, powx, powy;
	
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	
	x3 = x2 - x1;
	y3 = y2 - y1;
	
	powx = pow(x3,2);
	powy = pow(y3,2);
	
	dist = powx + powy;
	dist1 = pow(dist,0.5);
	
	printf("%.4lf\n", dist1);
	
	return 0;
}

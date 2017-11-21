#include<bits/stdc++.h>

using namespace std;

int main (){
	int a, b, c, d;
	double pot = pow (10,6);
	double a1, b1, c1, d1;
	
	for (a=1; a<=211; a++){
		for (b=a; ((a+b+b+b) <= 2000) && ((a*b*b*b) <= (20*pow(10,8))); b++){//Multiplica 10^2
			for (c=b; ((a+b+c+c) <= 2000) && ((a*b*c*c) <= (20*pow(10,8))); c++){//Multiplica 10^2
				
				d = ((pot *(a+b+c))/(a*b*c - pot));
				
				if (((a+b+c+d) == ((a*b*c*d)/(pow(10,6))))){ // (a+b+c+d)/100 == (a*b*c*d)/10^8
					if ((a+b+c+d)<=2000 && (d>=c) && ((a*b*c*d)<=(20*pow(10,8)))){
						a1 = a/100.00;
						b1 = b/100.00;
						c1 = c/100.00;
						d1 = d/100.00;
						printf("%.2lf %.2lf %.2lf %.2lf\n", a1, b1, c1, d1);
					
				}
			}
		}
	}
}

return 0;	
}


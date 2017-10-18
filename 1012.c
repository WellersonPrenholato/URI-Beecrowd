#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c, at, ac, atra, aq, ar, pi;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	//Area Triangulo
	at = (a * c)/2;
	//Area Circulo
	pi = 3.14159;
	ac = (pi * pow(c,2));
	//Area Trapezio
	atra = ((a+b)*c)/2;
	//Area Quadrado
	aq = pow(b,2);
	//Area Retangulo
	ar = a * b;
	//total 
	printf("TRIANGULO: %.3lf\n", at);
	printf("CIRCULO: %.3lf\n", ac);
	printf("TRAPEZIO: %.3lf\n", atra);
	printf("QUADRADO: %.3lf\n", aq);
	printf("RETANGULO: %.3lf\n", ar);
	
	return 0;
}


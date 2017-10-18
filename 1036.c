#include <stdio.h>
#include <math.h>

int main(){
	
    double a, b, c, r1, r2, x;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    x = b*b - 4*a*c;
    if(x > 0 && a != 0){
        x = pow(x,0.5);
        
        r1 = (-b+x)/(2*a);
        r2 = (-b-x)/(2*a);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
}

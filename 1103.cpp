#include<stdio.h>
#include<math.h>

int main (){
	int h1, m1, h2, m2;
	int hf, mf, res;

	
	while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2),(h1 != 0) || (m1 !=0) || (h2 !=0) || (m2!=0)){
		if ( m2>m1 && h1==h2 ){
	                res = m2-m1;
	             }else{
	                if (  m1>m2 && h1==h2 ){
	                res = 1440-(m1-m2);
	                   }else{          
	           if ( h1>h2 ){
	                res = (h1-h2)*60;
	                res = 1440-res;
	                if ( m1>m2 ){	
	                     res = res-(m1-m2);
	                     }else{
	                           res = res + (m2-m1);
	                           }
	           }else{
	                      res = (h2-h1)*60;
	                      if ( m1>m2 ){
	                           res = res - (m1-m2);
	                           }else{
	                                 res = res + (m2-m1);
	                            }
	                    }
				}
		}
	           printf ("%d\n", res);
			
	
	}
	return 0;
}

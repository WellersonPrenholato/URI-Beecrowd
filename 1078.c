#include <stdio.h>

int main(){
    int i,num,res;
    
    scanf("%d",&num);
    
    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",i,num,num*i);
    }
return 0;
}

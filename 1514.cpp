#include <bits/stdc++.h>

using namespace std;

int n, m, i, j, tmp;
int matriz[100][100];

bool um(int matriz[100][100]){
   bool b = true;
   int l;

   for (i = 0; i < n; ++i){
      l = 0;
 
      for (j = 0; j < m; ++j)
         l += matriz[i][j];

      if(l == m)
         b = false;
   }

   return b;
}

bool dois(int matriz[100][100]){
   int tmp = 0;
   bool b = true, b1;

   for (i = 0; i < m; ++i){
      b1 = false;

      for (j = 0; j < n; ++j)
         if(matriz[j][i] != 0)
            b1 = true;

      if(b1) tmp++;
   }

   if(tmp == m) return true;
   else 
    return false;
}

bool tres(int matriz[100][100]){
   bool b = true;
   int tmp;

   for (i = 0; i < m; ++i){
      tmp = 0;
         
      for (j = 0; j < n; ++j)
         tmp += matriz[j][i];
		
      if(tmp == n)
         b = false;
   }

   return b;
}

bool quatro(int matriz[100][100]){
   int tmp = 0, tmp2 = 0;

   for (i = 0; i < n; ++i){
      tmp = 0;

      for (j = 0; j < m; ++j)
         tmp += matriz[i][j];

      if(tmp > 0)
         tmp2++;
   }

   if(tmp2 == n) return true;
   else 
	return false;
}

int main()
{
   int c;
   
   while(scanf("%d %d", &n, &m), n!= 0 && m !=0){
      c = 0;

      for (i = 0; i < n; ++i)
         for (j = 0; j < m; ++j)
            scanf("%d", &matriz[i][j]);

      if(um(matriz)) 
	  c++;
	  
      if(dois(matriz)) 
	  c++;
	  
      if(tres(matriz)) 
	  c++;
	  
      if(quatro(matriz)) 
	  c++;

      printf("%d\n", c);
   }

   return 0;
}

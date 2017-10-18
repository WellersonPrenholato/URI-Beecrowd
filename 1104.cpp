#include <bits/stdc++.h>

using namespace std;

int alice[100001];
int beatriz[100001];

int main(){
	int a, b, x, i, c, al, be;

	while(scanf("%d %d", &a, &b), a != 0 && b !=0){
		
		memset(alice, 0, sizeof(alice));
		memset(beatriz, 0, sizeof(beatriz));
		c = 0, al = 0, be = 0;

		for (i = 0; i < a; ++i){
			scanf("%d", &x);
			alice[x]++;
		}
		
		for (i = 0; i < b; ++i){
			scanf("%d", &x);
			beatriz[x]++;
		}

		for (i = 0; i < 100001; ++i){
			if(alice[i] != 0 && beatriz[i] == 0)
				al++;
			if(alice[i] == 0 && beatriz[i] != 0)
				be++;
		}

		if(al < be) 
			printf("%d\n", al);
		else 
			printf("%d\n", be);
	}

	return 0;
}

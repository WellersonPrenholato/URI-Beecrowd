#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, i, j, k, t;

	while(scanf("%d", &n) !=EOF){
		i = 1;
		t = n/2;

		while(i <= n){
			for (j = 0; j < t; ++j)
				printf(" ");
			for (j = 0; j < i; ++j)
				printf("*");

			i += 2;
			t--;
			printf("\n");
		}

		i = 1;
		t = n/2;

		while(i <= 3){
			for (j = 0; j < t; ++j)
				printf(" ");
			for (j = 0; j < i; ++j)
				printf("*");

			i += 2;
			t--;
			printf("\n");
		}

		printf("\n");
	}

	return 0;
}

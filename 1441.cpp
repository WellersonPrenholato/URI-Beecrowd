#include<bits/stdc++.h>

using namespace std;
int main (){
int H, h_p, maior;

while(cin>>H, H!=0 ){
maior =H;
	while(H!=1){
		h_p = ( H % 2 == 0 ) ? 0.5 * H : 3 * H + 1;
		if ( h_p > maior ) maior = h_p;
			H = h_p;
}
cout<<maior<<endl;
}
return 0;
}

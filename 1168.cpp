#include<bits/stdc++.h>

using namespace std;

int main (){
	int t, i;
	string num;
	int numled=0;
	
	cin >> t;
	getline(cin, num);
	for (i=0; i<t; i++){
		getline(cin, num);
		numled = 0;
		for(string::iterator it=num.begin(); it!=num.end(); ++it){
			if (*it=='1'){
				numled = numled + 2;
				
			}else if (*it=='2'){
				numled = numled + 5;
				
			}else if (*it=='3'){
				numled = numled + 5;
				
			}else if (*it=='4'){
				numled = numled + 4;
				
			}else if (*it=='5'){
				numled = numled + 5;
				
			}else if (*it=='6'){
				numled = numled + 6;
				
			}else if (*it=='7'){
				numled = numled + 3;
				
			}else if (*it=='8'){
				numled = numled + 7;
				
			}else if (*it=='9'){
				numled = numled + 6;
				
			}else if (*it=='0'){
				numled = numled + 6;
			}
		}
		cout<<numled<<" leds"<<endl;
	}
	return 0;
}

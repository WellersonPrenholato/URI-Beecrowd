#include<iostream>

  using namespace std;
  
  int main (){
  	int t, n[5], i;
  	int cont=0;
  	cin >> t;
  	
  	for (i=0; i<5; i++){
  		cin >> n[i];
  		if (n[i]==t)
  		cont++;
	  }
	cout <<cont<<"\n"; 
  	return 0;
  }

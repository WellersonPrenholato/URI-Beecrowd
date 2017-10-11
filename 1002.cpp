#include<iostream>

  using namespace std;
  
  int main (){
  	double r;
  	double pi= 3.14159;
  	double area;
  	
  	cin >> r;
  	area = pi*(r*r);
  	
  	cout.precision(4);
  	cout << "A="<<fixed <<area<<"\n";
  	return 0;
  }

#include<iostream>

using namespace std;

int main (){
	int t, i; 
	double cod, mult, valor, total=0;
	
	cin >>t;
	
	for (i=0; i<t; i++){
		cin >> cod;
		cin >> mult;
		
		if (cod == 1001){
			valor = 1.5 * mult;
		}if (cod == 1002){
			valor = 2.5* mult;
		}if (cod == 1003){
			valor = 3.5* mult;
		}if (cod == 1004){
			valor = 4.5* mult;
		}if (cod == 1005){
			valor = 5.5* mult;		
		}
		total +=valor;
	}
	cout.precision(2);
	cout <<fixed<<total<<endl;
	return 0;
}

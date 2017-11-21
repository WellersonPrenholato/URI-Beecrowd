#include <iostream>

using namespace std;

int main (){

    int a, b, c;
    int somaac, somaab, somabc;
    
    cin >> a;
    cin >> b;
    cin >> c;

	somaac = a + c;
	somaab = a + b;
	somabc = b + c;
	
    if (a == c || a==b || b==c){
        cout << "S" << endl;
    }
    else if  (somaac == b || somabc ==a || somaab == c){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;
}

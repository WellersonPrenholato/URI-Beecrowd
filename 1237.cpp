#include<bits/stdc++.h>

using namespace std;
//Programação Dinâmica
void lcs(string x,string y){ //Maior Subsequência Comum
    int m = x.length();
    int n = y.length();
    int res = 0;
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n ; j++){
            if(x[i]==y[j]){
                int c = 0;
                for(int k = 0; k+i<m,k+j<n; k++){
                    if(x[k+i]!=y[k+j])
                        break;
                    c++;
                }
                if(c>res)
                    res = c;
            }
        }
    cout<<res<<endl;
}

int main(){

    string um,dois;

    while(getline(cin,um) && getline(cin,dois)){
        lcs(um,dois);
    }
    return 0;
}

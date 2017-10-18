#include<bits/stdc++.h>
using namespace std;

int main() {
  string line;
  
  double ans = 0, t = 0, m;
  cout << setprecision(1) << fixed;
  
  while (getline(cin, line)) {
    getline(cin, line);
    stringstream ss(line);
	ss >> m;
    ans += m;
    t++;
  }
  cout << (ans / t) << endl;
  return 0;
}

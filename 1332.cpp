#include<bits/stdc++.h>

using namespace std;

int cmp(string a, string b) {
  int match = 0, i;
  for (i = 0; i < a.size(); ++i)
    match += a[i] == b[i];
  return match >= (a.size() - 1);
}

int main() {
int n; 
string line; 
cin >> n;
  while (n--) {
	cin >> line;
    
	if (line.size() == 5)
      cout << 3 << endl;
    else
      if (cmp("one", line))
        cout << 1 << endl;
      else
        cout << 2 << endl;
  }

  return 0;
}

#include <bits/stdc++.h>
#define MAX 200000
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector< ii > vii;
vii g[MAX + 1];
bool visitado[MAX+1];
int n,m;

	ll prim(int s){
		ll cost = 0;
		priority_queue< ii, vector<ii>, greater<ii> > pq;
		for(int i = 0; i <=n ;i++) visitado[i] = false;
			for(int i = 0; i< g[s].size(); i++){
				pq.push(ii(g[s][i].second,g[s][i].first));
				visitado[s] = true;
	}
	while(!pq.empty()){
		ii aux = pq.top();
		pq.pop();
		int u,d;
		u = aux.first;
		d = aux.second;
		if(!visitado[d]){
			cost += u;
		visitado[d] = true;
		for(int i = 0;i < g[d].size(); i++){
			if(!visitado[g[d][i].first])
				pq.push(ii(g[d][i].second,g[d][i].first));
			}
		}
	}
	return cost;
}

int main(){
	cin >> m >> n;
	
	while(n!=0 || m!=0){
		for(int i = 0;i <=m ;i++) g[i].clear();
			ll total = 0;
		for(int i = 0; i<n;i++){
			int x,y,z;
			cin >> x >> y >> z;
			g[x].push_back(ii(y,z));
			g[y].push_back(ii(x,z));
			total += z;
		}
		ll resp = total - prim(0);
		cout << resp << endl;
		cin >> m >> n;
	}
	return 0;
}

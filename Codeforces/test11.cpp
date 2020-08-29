#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;
const int inf = 1e18L + 5;
 
vii *G;
vi D,P;
 
void Dijkstra(int s,int N){
	D.assign(N+1,inf);
	P.assign(N+1,-1);
	D[s]=0;
	P[s]=-1;
	set<pii> Q;
	Q.insert({0,s});
	while(!Q.empty()){
		auto top=Q.begin();
		int u=top->second;
		Q.erase(top);
		if(u==N)return ;
		for(auto next:G[u]){
			int v=next.first,wt=next.second;
			if(D[v]>D[u]+wt){
				P[v]=u;
				Q.erase({D[v], v});
				D[v]=D[u]+wt;
				Q.insert({D[v], v});
			}
		}
	}
}
void print_shortest_path(int to){
	vi path;
	for(int i=to;i!=-1;i=P[i])path.push_back(i);
	reverse(path.begin(),path.end());
	for(auto i:path)printf("%lld ", i);
}
int32_t main(){
	int N,m; scanf("%lld%lld", &N, &m);
	G= new vii[N+1];
	for(int i=0;i<m;i++){
		int a,b,w;cin>>a>>b>>w;
		G[a].push_back({b,w});
		G[b].push_back({a,w});
	}
	Dijkstra(1,N);
	if(D[N]==inf)cout<<-1;
	else
		print_shortest_path(N);
	//cout<<D[N]<<"\n";
		
}
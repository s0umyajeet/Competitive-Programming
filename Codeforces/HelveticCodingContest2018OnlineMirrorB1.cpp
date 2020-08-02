    #include <bits/stdc++.h>
    #define int long long
    #define coutans cout << "ans: " //debug
    #define endl "\n"
    using namespace std;
     
    int32_t main() {
    	ios_base::sync_with_stdio(0);
    	cin.tie(0);
     
    	int t = 1;
    	cin >> t;
     
    	vector<vector<int>> adj(t);
    	t--;
    	while (t--) {
    		int a, b;
    		cin >> a >> b;
    		adj[a - 1].push_back(b - 1);
    		adj[b - 1].push_back(a - 1);
    	}
     
    	int count = 0;
    	for (int i = 0; i < adj.size(); i++) {
    		if (adj[i].size() == 1) {
    			count++;
    		}
    	}
    	cout << count << endl;
    	return 0;
    }
#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                int n, m;
                cin >> n >> m;
                vector<vector<int>> adj(n + 1);
                vector<bool> visited(n + 1, false);
                for (int i = 0; i < m; i++) {
                        int a, b;
                        cin >> a >> b;
                        adj[a].push_back(b);
                        adj[b].push_back(a);
                }

                vector<pair<int, int>> time(n + 1);
                stack<int> s;
                int counter = 0;
                int v;
                cin >> v;
                s.push(v);
                counter++;
                time[v].first = counter;
                
                while (!s.empty()) {
                        counter++;
                        int top = s.top();
                        s.pop();
                        time[top].second = counter;
                        if (!visited[top]) {
                                visited[top] =  true;
                        }
                        for (auto x : adj[top]) {
                                if (!visited[x]) {
                                        s.push(x);
                                }
                        }
                }
                for (int i = 1; i < time.size(); i++) {
                        cout << time[i].first << " " << time[i].second << endl;
                }
        }
}
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n = 100;
int graph[100][100];
int s, f;
vector<int> dist(n, INT_MAX);
vector<bool> visited(n, false);

int findNextMin() {
        int min_dist = INT_MAX;
        int min_index = 0;
        for (int i = 0; i < n; i++) {
                if (!visited[i] && dist[i] <= min_dist) {
                        min_dist = dist[i];
                        min_index = i;
                }
        }
        return min_index;
}

void Dijkstra() { 
        s--, f--;
        dist[s] = 0; 
        for (int count = 0; count < n; count++) { 
                int u = findNextMin();
                visited[u] = true; 
                for (int v = 0; v < n; v++) {
                        if (!visited[v] && graph[u][v] != -1 && dist[u] != INT_MAX 
                                && dist[u] + graph[u][v] < dist[v]) 
                                        dist[v] = dist[u] + graph[u][v]; 
                }
        } 
        cout << (dist[f] == INT_MAX ? -1 : dist[f]) << endl;
}
        
int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int tc = 1;
        // cin >> tc;

        for (int i = 1; i <= tc; i++) {
                cin >> n >> s >> f;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                cin >> graph[i][j];
                        }
                }
                Dijkstra();
        }
        
}
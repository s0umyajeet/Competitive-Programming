#include <bits/stdc++.h>
using namespace std;

int n, s;

vector<int> bfs(const vector<vector<int>> &adj) {
        queue<int> q;
        vector<int> visited(n);
        vector<int> distance(n, INT_MAX);

        q.push(s - 1);
        visited[s - 1] = 1;
        distance[s - 1] = 0;

        while (!q.empty()) {
                int v = q.front();
                q.pop();

                for (auto i : adj[v]) {
                        if (!visited[i]) {
                                visited[i] = 1;
                                distance[i] = distance[v] + 1;
                                q.push(i);
                        }
                }
        }
        for (auto &x : distance) if (x == INT_MAX) x = -1;
        return distance;
}

int main() {
        cin >> n >> s;
        vector<vector<int>> adj(n);

        int input;
        for (int i = 0; i < n; i++) { 
                for (int j = 0; j < n; j++) {
                        cin >> input;   
                        if (input == 1)
                                adj[i].push_back(j);
                }
        }

        vector<int> dist = bfs(adj);
        for (auto x : dist) cout << x << " ";
        cout << endl;
        return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;

void bfs(const vector<vector<int>> &adj) {
        queue<int> q;
        vector<int> visited(n);
        vector<int> distance(n, INT_MAX);
        vector<int> pred(n);

        q.push(a - 1);
        visited[a - 1] = 1;
        distance[a - 1] = 0;
        pred[a - 1] = -1;

        while (!q.empty()) {
                int v = q.front();
                q.pop();

                for (auto i : adj[v]) {
                        if (!visited[i]) {
                                visited[i] = 1;
                                distance[i] =  distance[v] + 1;
                                pred[i] = v;
                                q.push(i);
                        }
                }
        }

        vector<int> path;
        int crawl = b - 1;
        path.push_back(crawl);
        
        while (crawl != -1) {
                path.push_back(pred[crawl]);
                crawl = pred[crawl];
        }

        if (distance[b - 1] == INT_MAX) {
                cout << -1 << endl;
        } else {
                cout << distance[b - 1] << endl;
                for (int i = path.size() - 2; i >= 0; i--) cout << path[i] + 1 << " ";
                cout << endl;
        }
}

int main() {
        cin >> n >> m >> a >> b;
        vector<vector<int>> adj(n);

        while (m--) {
                int p, q;
                cin >> p >> q;
                adj[p - 1].push_back(q - 1);
                adj[q - 1].push_back(p - 1);
        }

        bfs(adj);
        return 0;
}
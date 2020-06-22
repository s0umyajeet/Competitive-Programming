#include <bits/stdc++.h>
using namespace std;

int n, x, y;

int bfs(vector<vector<int>> adj) {
        queue<int> q;
        q.push(x - 1);

        vector<int> visited(n);
        visited[x - 1] = 1;

        vector<int> distance(n, INT_MAX);
        distance[x - 1] = 0;

        while (!q.empty()) {
                int v = q.front();
                q.pop();

                for (auto i : adj[v]) {
                        if (!visited[i]) {
                                visited[i] = 1;
                                distance[i] = distance[v] + 1;
                                q.push(i);
                        }
                        if (i == y - 1) return distance[i];
                }
        }
        return -1;
}
int main() {
        cin >> n;
        vector<vector<int>> adj(n);

        int input;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input == 1) {
                                adj[i].push_back(j);
                        }
                }
        }

        cin >> x >> y;
        cout << bfs(adj) << endl;
        return 0;
}
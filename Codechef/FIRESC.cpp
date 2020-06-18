#include <bits/stdc++.h>
using namespace std;

int dfs(vector<bool> &visited, vector<vector<int>> adjacency_list, int i) {
        visited[i] = true;        
        stack<int> s;

        int ans = 0;
        s.push(i);
        ans++;

        while (!s.empty()) {
                i = s.top();
                s.pop();

                if (!visited[i]) {
                        visited[i] = true;
                        ans++;
                }

                for (auto j = adjacency_list[i].begin(); j != adjacency_list[i].end(); j++) {
                        if (!visited[*j])
                                s.push(*j);
                }
        }
        return ans;
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {
                int n, m;
                cin >> n >> m;

                vector<vector<int>> adjacency_list(n);
                vector<bool> visited(n, false);

                for (int i = 0; i < m; i++) {
                        int a, b;
                        cin >> a >> b;
                        adjacency_list[a - 1].push_back(b - 1);
                        adjacency_list[b - 1].push_back(a - 1);
                }       

                int count = 0;
                long long ans = 1;
                for (int i = 0; i < n; i++) {
                        if (!visited[i]) {
                                visited[i] = true;
                                ans *= (dfs(visited, adjacency_list, i)) % 1000000007;
                                count++;
                        }
                }

                cout << count << " " << ans << endl;
        }
        return 0;
}
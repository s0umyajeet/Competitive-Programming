#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
        vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
        {
                vector<vector<int>> adj(n);

                for (int i = 0; i < edges.size(); i++)
                {
                        cout << "running" << endl;
                        adj[edges[i][0]].push_back(edges[i][1]);
                }

                vector<vector<int>> visited(n, vector<int>(n, 0));
                for (int i = 0; i < n; i++)
                {
                        dfs(adj, i, visited[i]);
                }

                for (auto x : adj)
                {
                        for (auto y : x)
                        {
                                cout << y << " ";
                        }
                        cout << endl;
                }

                set<int> ans;
                vector<int> v(n, 0);
                for (int i = 0; i < n; i++)
                {
                        for (int j = 0; j < n; j++)
                        {
                                if (!v[j] && visited[i][j])
                                {
                                        ans.insert(i);
                                        v[j] = 1;
                                }
                                if (find(v.begin(), v.end(), 0) == v.end())
                                        break;
                        }
                }
                return vector<int>(ans.begin(), ans.end());
        }
        void dfs(vector<vector<int>> &adj, int start, vector<int> &visiited)
        {
                if (!visiited[start])
                        visiited[start] = 1;
                for (auto x : adj[start])
                {
                        if (!visiited[x])
                                dfs(adj, x, visiited);
                }
        }
};

int main()
{
        Solution sol;
        int n;
        cin >> n;
        vector<vector<int>> v = {{0, 1}, {0, 2}, {2, 5}, {3, 4}, {4, 2}};
        vector<int> ans = sol.findSmallestSetOfVertices(n, v);
        for (auto x : ans)
                cout << x << " ";
        cout << endl;
        return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        vector<vector<int>> v(n + 1);

        int k;
        cin >> k;
        while (k--) {
                int operation;
                cin >> operation;
                if (operation == 1) {
                        int a, b;
                        cin >> a >> b;
                        v[a].push_back(b);
                        v[b].push_back(a);
                } else {
                        int vertex;
                        cin >> vertex;
                        if (v[vertex].size() == 0) cout << endl; 
                        else {
                                for (int i = 0; i < v[vertex].size(); i++) {
                                        cout << v[vertex][i] << " ";
                                }
                        }
                }
        }
        return 0;
}
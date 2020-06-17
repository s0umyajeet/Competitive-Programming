#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        //int mat[n][n];

        int input = 0;
        vector<vector<int>> v(n);
        
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input == 1) {
                                v[i - 1].push_back(j - 1);                        
                                v[j - 1].push_back(i - 1);
                        }
                }
        }


        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cout << v[i][j];
                }
        }

        map<int, int> m;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < v[i].size(); j++) {
                        m[v[i][j]]++;
                }
        }

        for (auto itr = m.begin(); itr != m.end(); itr++) {
                cout << itr->first << " " << itr->second << endl;
        }

        int count = 0;
        
        for (auto itr = m.begin(); itr != m.end(); itr++) {
                if (itr->second == 1) count++;
        }
 
        cout << count << endl;
        return 0;
}
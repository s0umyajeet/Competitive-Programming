#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >>t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                }

                map<int, int> m;
                for (int i = 0; i < n - 1; ) {
                        m[v[i]]++;
                        if (v[i] == v[i + 1]) {
                                i += 2;       
                        } else i++;
                }
                int maxx = -9;
                for (auto itr = m.begin(); itr != m.end(); itr++) {
                        maxx = max(maxx, itr->second);
                }
                cout << maxx << endl;
        }
}
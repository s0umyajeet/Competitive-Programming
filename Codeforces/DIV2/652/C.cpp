#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n, k;
                cin >> n >> k;
                vector<int> v(n);
                vector<int> w(k);

                for (auto &x : v) cin >> x;
                for (auto &x : w) cin >> x;

                vector<vector<int>> friends(k);
                sort(v.begin(), v.end(), greater<int>());
                sort(w.begin(), w.end());
                int happiness = 0;

                int i = 0;
                while (i < n) {
                        for (int j = 0; j < k; j++) {
                                if (i > n - 1) break;
                                if (friends[j].size() >= w[j]) {
                                        continue;
                                } else {
                                        friends[j].push_back(v[i]);
                                        i++;
                                }
                        }
                }
        
                for (int i = 0; i < k; i++) {
                        auto itr = minmax_element(friends[i].begin(), friends[i].end());
                        happiness += *itr.first;
                        happiness += *itr.second;
                }               
                cout << happiness << endl;
        }
}
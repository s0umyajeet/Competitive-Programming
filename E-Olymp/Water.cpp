
#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n, {0, 1});

        bool impossible = false;
        for (auto &x : v) {
                cin >> x.first;
                if (x.first > k) impossible = true;
        }

        if (impossible) {
                cout << "Impossible" << endl;
                return 0;
        }
 
        // for (auto x : v) cout << x.first << " " << x.second << endl;

        int count = 0;
        for (int i = 0; i < n; i++) {
                if (v[i].second != -1) {
                        int target = k - v[i].first;
                        if (target > 0) {
                                for (int j = 0; j < v.size(); j++) {
                                        if (v[j].second != -1 && v[j].first == target && j != i) {
                                                count++;
                                                v[j].second = -1;
                                                v[i].second = -1;
                                                break;
                                        }
                                }
                        }
                }
        }

        for (int i = 0; i < v.size(); i++) if (v[i].second == 1) count++;
        cout << count << endl;
        return 0;
}
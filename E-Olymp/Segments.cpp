#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (auto &x : v) cin >> x.first >> x.second;
        sort(v.begin(), v.end());

        int count = 0;
        for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                        if (v[j].first > v[i].first && v[j].first >= v[i].second) 
                                count++;
                }
        }
        cout << count << endl;
}
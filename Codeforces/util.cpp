#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<int> v(100);
        for (auto &x : v) cin >> x;
        int indices[7] = {11, 14, 15, 21, 34, 73, 76};
        vector<int> ans;
        for (int i = 0; i < 7; i++) ans.push_back(v[indices[i] - 1]);
        sort(ans.begin(), ans.end(), greater<int>());
        for (auto x : ans) cout << x << " ";
}
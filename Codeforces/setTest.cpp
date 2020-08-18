#include <bits/stdc++.h>
using namespace std;

int main() {
        set<pair<int, int>> s = {{1, 2}, {3, 5}, {4, 3}, {3, 4}};
        for (auto x : s) cout << x.first << " " << x.second << endl;
        return 0;
}
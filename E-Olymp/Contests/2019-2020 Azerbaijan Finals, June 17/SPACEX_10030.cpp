#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, k;
        cin >> n >> k;
        set<int> locations;
        for (int i = 0; i < n; i++) {
                int input;
                cin >> input;
                locations.insert(input);
        }
        if (locations.size() > k) cout << locations.size() - k;
        else cout << k - locations.size();
}
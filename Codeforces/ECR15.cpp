#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x: v) cin >> x;
        int length = 0;
        int max_length = 1;
        for (int i = 0; i < n - 1; i++) {
                if (v[i + 1] > v[i]) {
                        length++;
                        max_length = max(max_length, length + 1);
                } else {
                        length = 0;
                }
        }
        cout << max_length << endl;
}
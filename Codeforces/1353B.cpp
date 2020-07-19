#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n, k;
                cin >> n >> k;
                vector<int> a(n), b(n);
                for (auto &x : a) cin >> x;
                for (auto &x : b) cin >> x;

                sort(a.begin(), a.end(), greater<int>());
                sort(b.begin(), b.end(), greater<int>());

                int sum = 0;
                for (int i = 0; i < n - k; i++) {
                        sum += a[i];
                }

                for (int i = 0; i < k; i++) {
                        if (a[i + k] > b[i]) sum += a[i];
                        else sum += b[i];
                }

                cout << "ans is: " << sum << endl;
        }
}
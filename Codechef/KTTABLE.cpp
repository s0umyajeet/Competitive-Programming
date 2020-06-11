#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;

                vector<int> A(n), B(n), time(n);
                for (auto &x : A) cin >> x;
                for (auto &x : B) cin >> x;

                time[0] = A[0];
                for (int i = 1; i < n; i++) {
                        time[i] = A[i] - A[i - 1];
                }

                int count = 0;
                for (int i = 0; i < n; i++) {
                        if (time[i] >= B[i]) count++;
                }
                cout << count << endl;
        }
        return 0;
}
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

                int size = 0;
                int sum = 0;
                
                sort(a.begin(), a.end(), greater<int>());
                sort(b.begin(), b.end(), greater<int>());

                int i = 0, j = 0;
                int count = 0;
                while (size < n) {
                        if (a[i] >= b[j]) {
                                sum += a[i];
                                i++;
                        } else {
                                if (count < k) {
                                        sum += b[j];
                                        j++;
                                        count++;
                                } else {
                                        sum += a[i];
                                        i++;
                                } 
                        }
                        size++;
                }
                cout << sum << endl;
        }
        return 0;
}
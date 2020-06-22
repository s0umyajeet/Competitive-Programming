#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        
        while (t--) {
                int n;
                cin >> n;
                vector<int> arr(n);

                for (auto &x : arr) cin >> x;

                int ans = 0;
                for (int k = 0; k < n; k++) {
                        for (int i = k; i < n; i++) {
                                int sum = 0;
                                int prod = 1;
                                for (int j = i; j < n; j++) {
                                        sum += arr[j];
                                        prod *= arr[j];
                                }
                                if (sum == prod) ans++;            
                        }
                }
                cout << ans << endl;
        }
        return 0;
}
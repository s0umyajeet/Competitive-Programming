#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;

        while (t--) {
                int n;
                cin >> n;
                
                int input;
                int ans = -9999;
                for (int i = 1; i <= n; i++) {
                        int sum = 0;
                        for (int j = 0; j < i; j++) {
                                cin >> input;
                                sum += input;
                        }
                        ans = max(ans, sum);
                }
                cout << ans << endl;
        }
        return 0;
}
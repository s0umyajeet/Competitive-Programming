#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        vector<string> v(n);
        string ans;

        for (auto &x : v) cin >> x;
        int carry = 0;


        for (int i = 49; i >= 0; i--) {
                int sum = 0;
                for (int j = 0; j < n; j++) {
                        sum += (v[j][i] - 48);
                }
                sum += carry;
                carry = sum / 10;
                sum = sum % 10;
                ans += to_string(sum);
        }

        reverse(ans.begin(), ans.end());
        cout << carry;
        for (int i = 0; i < 10 - log10(carry) - 1; i++) {
                cout << ans[i];
        }        
        
        return 0;
}
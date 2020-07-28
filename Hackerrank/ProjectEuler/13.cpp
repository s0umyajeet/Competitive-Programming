#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        vector<string> v(n);
        string ans;

        for (auto x : v) cin >> x;
        int carry = 0;

        for (int i = 49; i >= 0; i--) {
                int sum = 0;
                //carry = 0;
                for (int j = 0; j < n; j++) {
                        sum += v[j][i];
                        sum += carry;
                }
                cout << sum << endl;
                cout << carry << endl;
                carry = sum / 10;
                sum = sum % 10;
                ans += to_string(sum);
        }

        ans += carry - 48;
        reverse(ans.begin(), ans.end());
        
        for (int i = 0; i < 10; i++) {
                cout << ans[i];
        }
        return 0;
}
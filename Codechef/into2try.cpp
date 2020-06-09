#include <bits/stdc++.h>
using namespace std;

string multiply2(string x) {
        string ans;
        int carry = 0;
        int prod;

        for (int i = x.size() - 1; i >= 0; i--) {
                prod = ((x[i] - 48) * 2) + carry;
                ans += (char)(48 + (prod % 10));
                if (prod / 10) carry = 1;
                else carry = 0;
        }
        if (carry) ans += (48 + carry);
        reverse(ans.begin(), ans.end());
        return ans;
}

int main() {
        string x = "9999999999999999";
        string ans = multiply2(x);
        cout << ans << endl;
}
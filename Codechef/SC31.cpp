#include <bits/stdc++.h>
using namespace std;

string exor(string a, string b) {
        string ans;
        for (int i = 0; i < a.size(); i++) {
                if (a[i] == b[i]) ans += "0";
                else ans += "1";
        }
        return ans;
}

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                string v[n];
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                }
                string ans = "0000000000";
                for (int i = 0; i < n; i++) {
                        ans = exor(ans, v[i]);
                }
                cout << count(ans.begin(), ans.end(), '1') << endl;
        }
        return 0;
}
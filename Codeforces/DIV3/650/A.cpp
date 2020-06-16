#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {
                string b;
                cin >> b;

                if (b.size() == 2) cout << b << endl;
                else {
                        string ans;
                        for (int i = 0; i < b.size(); i += 2) {
                                ans += b[i];
                        }
                        ans += b[b.size() - 1];
                        cout << ans << endl;
                }
        }
        return 0;
}
#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // int t;
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                vector<int> teams(n);
                vector<int> count(2);
                for (int i = 0; i < n; i++) {
                        cin >> teams[i];
                        count[teams[i] - 1]++;
                }

                if (count[1] <= count[0]) {
                        int total = count[1];
                        int rem1 = count[0] - count[1];
                        cout << total + rem1 / 3 << endl;
                } else {
                        cout << count[0] << endl;
                }
        }
        return 0;
}